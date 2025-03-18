import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from sensor_msgs.msg import BatteryState

class MinimalPubSub(Node):
    def __init__(self):
        super().__init__('node_gmarin_pubsub_custom_message')

        self.publisher_ = self.create_publisher(BatteryState, 'topic_3', 10)
        self.subscription = self.create_subscription(
            String,
            'topic_3',
            self.listener_callback,
            10
        )
        self.timer = self.create_timer(2, self.timer_callback)

    def _get_random_voltage(self):
        import random
        return random.uniform(0.0, 3.3)

    def timer_callback(self):
        msg = BatteryState()
        msg.voltage = self._get_random_voltage()
        self.publisher_.publish(msg)
        self.get_logger().info(f'Publishing from pubsub_custom_message:\nbattery state: {msg}"')
    
    def listener_callback(self, msg):
        self.get_logger().info(f'Received in pubsub_custom_message:\nbattery state: "{msg}"')


def main(args=None):
    rclpy.init(args=args)
    
    minimal_pubsub = MinimalPubSub()

    try:
        rclpy.spin(minimal_pubsub)
    except KeyboardInterrupt:
        pass
    finally:
        minimal_pubsub.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
