cmake_minimum_required(VERSION 2.8.3)
project(communication)

SET (CMAKE_C_FLAGS      "-std=c++11")
SET (CMAKE_CXX_FLAGS    "-std=c++11")

find_package(catkin REQUIRED COMPONENTS
        roscpp
        rospy
        std_msgs
        image_transport
        roslib
        image_geometry
        camera_info_manager
        sensor_msgs
        tf
        cv_bridge
        )

find_package(
        OpenCV )

catkin_package(
        INCLUDE_DIRS include
        LIBRARIES communicationRos
        CATKIN_DEPENDS roscpp rospy std_msgs roslib sensor_msgs
)

include_directories(include ${catkin_INCLUDE_DIRS} ${OpenCV_INCLUDE_DIRS})

add_executable(publisher_node src/publisher_node.cpp src/Publisher.cpp include/communication/Publisher.hpp)
add_executable(subscriber_node src/subscriber_node.cpp src/Subscriber.cpp include/communication/Subscriber.hpp)

target_link_libraries(publisher_node ${catkin_LIBRARIES} ${OpenCV_LIBRARIES})
target_link_libraries(subscriber_node ${catkin_LIBRARIES} ${OpenCV_LIBRARIES})
