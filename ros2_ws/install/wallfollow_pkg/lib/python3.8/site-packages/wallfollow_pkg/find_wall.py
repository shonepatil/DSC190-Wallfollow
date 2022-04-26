# import the Empty module from std_servs service interface
from std_srvs.srv import Empty
# import the Twist module from geometry_msgs messages interface
from geometry_msgs.msg import Twist
# import the LaserScan module from sensor_msgs interface
from sensor_msgs.msg import LaserScan
# import the ROS2 python client libraries
import rclpy
from rclpy.node import Node
from rclpy.qos import ReliabilityPolicy, QoSProfile


class Service(Node):

    def __init__(self):
        # Here we have the class constructor

        # call the class constructor to initialize the node as service_stop
        super().__init__('service_find_wall')
        # create the service server object
        # defines the type, name and callback function
        self.srv = self.create_service(Empty, 'find_wall', self.Empty_callback)
        # create the publisher object
        # in this case the publisher will publish on /cmd_vel topic with a queue size of 10 messages.
        # use the Twist module
        self.publisher_ = self.create_publisher(Twist, 'cmd_vel', 10)

        # create the subscriber object
        self.subscriber = self.create_subscription(
            LaserScan, '/scan', self.move_turtlebot, QoSProfile(depth=10, reliability=ReliabilityPolicy.BEST_EFFORT))
        # prevent unused variable warning
        self.subscriber
        # define the timer period for 0.5 seconds
        self.timer_period = 0.5
        self.timer = None
        self.at_wall = False
        # define the variable to save the received info
        self.laser_wall_dist = 0
        self.laser_front = 0
        self.laser_right = 0

    def move_turtlebot(self, msg):
        # Save the wall laser scan info at smallest
        self.laser_wall_dist = min(msg.ranges)
        self.laser_front = msg.ranges[180]
        self.laser_right = msg.ranges[90]

    def move_to_wall(self):

        # Logic of move
        if not self.at_wall:
            # print the data
            self.get_logger().info('wall sensor dist: "%s"' % str(self.laser_wall_dist))
            self.get_logger().info('laser front dist: "%s"' % str(self.laser_front))
            if self.laser_front > self.laser_wall_dist + 0.05:
                self.cmd.linear.x = 0.0
                self.cmd.angular.z = 0.3
            elif self.laser_front > 0.3:
                self.cmd.linear.x = 0.2
                self.cmd.angular.z = 0.0
            else:
                self.cmd.linear.x = 0.0
                self.cmd.angular.z = 0.0
                self.publisher_.publish(self.cmd)
                self.at_wall = True
        else:
            # print the data
            self.get_logger().info('wall sensor dist: "%s"' % str(self.laser_wall_dist))
            self.get_logger().info('laser right dist: "%s"' % str(self.laser_right))
            if self.laser_right > self.laser_wall_dist + 0.02:
                self.cmd.linear.x = 0.0
                self.cmd.angular.z = 0.2
            else:
                self.cmd.linear.x = 0.0
                self.cmd.angular.z = 0.0
                self.publisher_.publish(self.cmd)
                self.destroy_timer(self.timer)
                return

        # Publishing the cmd_vel values to topipc
        self.publisher_.publish(self.cmd)

    def Empty_callback(self, request, response):
        # The callback function recives the self class parameter,
        # received along with two parameters called request and response
        # - receive the data by request
        # - return a result as response

        # create a Twist message
        self.cmd = Twist()

        self.timer = self.create_timer(self.timer_period, self.move_to_wall)

        # print a pretty message
        self.get_logger().info('Found nearest wall.')

        # return the response parameter
        return response


def main(args=None):
    # initialize the ROS communication
    rclpy.init(args=args)
    # declare the node constructor
    service = Service()
    # pause the program execution, waits for a request to kill the node (ctrl+c)
    rclpy.spin(service)
    # shutdown the ROS communication
    rclpy.shutdown()


if __name__ == '__main__':
    main()
