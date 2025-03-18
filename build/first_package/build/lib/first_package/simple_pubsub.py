# Import the ROS2 Python client library
import rclpy
from rclpy.node import Node
from std_msgs.msg import String  # Import the String message type

class MinimalPubSub(Node):
    def __init__(self):
        super().__init__('node_gmarin_pubsub')

        self.publisher_ = self.create_publisher(String, 'topic_2', 10)
        self.subscription = self.create_subscription(
            String,
            'topic_1',
            self.listener_callback,
            10
        )
        self.timer = self.create_timer(2, self.timer_callback)
        self.i = 0

    def timer_callback(self):
        msg = String()
        msg.data = f"gmarin says hello from pubsub! This is message #{self.i}"
        self.publisher_.publish(msg)
        self.get_logger().info(f'Publishing from pubsub: "{msg.data}"')
        self.i += 1
    
    def listener_callback(self, msg):
        self.get_logger().info(f'Received in pubsub: "{msg.data}"')


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
