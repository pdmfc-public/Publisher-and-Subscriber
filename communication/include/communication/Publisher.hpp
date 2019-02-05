#ifndef C_PUBLISHER_HPP
#define C_PUBLISHER_HPP

#include <ros/ros.h>
#include <ros/package.h>
#include <image_transport/image_transport.h>
#include <cv_bridge/cv_bridge.h>
#include <opencv2/opencv.hpp>


namespace PBSR
{
    class Publisher
    {
    public:

        Publisher ();
        virtual ~Publisher (){};

        void run();

    private:
        ros::NodeHandle n;
	ros::Publisher pub;

    };
}

#endif
