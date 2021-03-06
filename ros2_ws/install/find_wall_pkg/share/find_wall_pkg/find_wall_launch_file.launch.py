from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    return LaunchDescription([
        Node(
            package='find_wall_pkg',
            executable='find_wall',
            output='screen'),
    ])
