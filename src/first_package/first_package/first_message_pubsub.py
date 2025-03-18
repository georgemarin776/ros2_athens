import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from first_interfaces.msg import FirstMessage

class MinimalPubSub(Node):
    def __init__(self):
        super().__init__('node_gmarin_pubsub_FirstMessage')

        self.publisher_ = self.create_publisher(FirstMessage, 'topic_4', 10)
        self.subscription = self.create_subscription(
            String,
            'topic_4',
            self.listener_callback,
            10
        )
        self.timer = self.create_timer(2, self.timer_callback)

    def _get_random_temperatures(self):
        import random
        return [random.uniform(-20, 40) for _ in range(10)]

    def timer_callback(self):
        msg = FirstMessage()
        msg.temperatures = self._get_random_temperatures()
        self.publisher_.publish(msg)
        self.get_logger().info(f'Publishing from first_message_message:\nFirstMessage: {msg}"')
    
    def listener_callback(self, msg):
        self.get_logger().info(f'Received in first_message_message:\nFirstMessage: "{msg}"')


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
