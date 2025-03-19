import rclpy
from rclpy.node import Node
from stmmsgs.msg import STMControl

class MinimalPubSub(Node):
    def __init__(self):
        super().__init__('stm_serial_node_ctrl_pub_custom')

        self.stm_control_topic = '/stm_control'
        self.publisher_ = self.create_publisher(STMControl, self.stm_control_topic, 10)
        self.get_logger().info(f'Publisher created on topic {self.stm_control_topic}')
        self.loop_frequency = 1000
        self.timer = self.create_timer(1 / self.loop_frequency, self.timer_ctrl_pub_callback)
        self.timer_for_pwm = self.create_timer(5, self.timer_change_pwm_callback)
        self.pwm_speed = 0

    def _cycle_pwm_speed(self):
        if self.pwm_speed == 0:
            self.pwm_speed = 100
        elif self.pwm_speed == 100:
            self.pwm_speed = 0

    def timer_ctrl_pub_callback(self):
        msg = STMControl()
        msg.control_type = int(2)
        msg.setpoint = float(0)
        msg.kp = float(0)
        msg.pwm = float(self.pwm_speed)
        self.publisher_.publish(msg)
        self.get_logger().info(f'Publishing from stm_serial_node_ctrl_pub:\ncontrol command: {msg}')

    def timer_change_pwm_callback(self):
        self._cycle_pwm_speed()

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
