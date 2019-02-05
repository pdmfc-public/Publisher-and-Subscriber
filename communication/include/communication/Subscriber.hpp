#ifndef C_SUBSCRIBER_HPP
#define C_SUBSCRIBER_HPP

#include <ros/ros.h>
#include <ros/package.h>
#include <image_transport/image_transport.h>
#include <cv_bridge/cv_bridge.h>
#include <opencv2/opencv.hpp>


namespace SBCR
{
    class Subscriber
    {
    public:

        Subscriber ();
        virtual ~Subscriber (){};

        void run();

    private:
        ros::NodeHandle n;
	ros::Subscriber sub;

    };
}

#endif
