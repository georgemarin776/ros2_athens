# The Objective:
# To create a ROS 2 node that provides a service to add two integers and return the sum.

# 1. Import necessary libraries and custom message/service types
import rclpy
from rclpy.node import Node
from example_interfaces.srv import AddTwoInts

# 2. Define the AddTwoIntsServer class
class AddTwoIntsServer(Node):
    def __init__(self):
        super().__init__('add_two_ints_server')
        
        # 3. Create the service
        # The service name is 'add_two_ints'
        # The service type is 'AddTwoInts'
        # The callback function is 'handle_request'
        self.service = self.create_service(AddTwoInts, 'add_two_ints', self.handle_request)
        self.extra_term = 0

    # 4. Define the handle_request method to process the request and return the response
    def handle_request(self, request, response):
        # Add the parameter value to the sum
        response.sum = request.a + request.b + self.extra_term
        self.get_logger().info(f'Received: {request.a} + {request.b} = {response.sum}')
        
        # Return the response to the client
        return response

def main(args=None):
    rclpy.init(args=args)
    node = AddTwoIntsServer()
    rclpy.spin(node)
    rclpy.shutdown()
