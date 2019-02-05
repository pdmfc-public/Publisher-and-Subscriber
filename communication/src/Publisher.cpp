#include "communication/Publisher.hpp"

using namespace PBSR;

Publisher::Publisher():n("~") {



}

void Publisher::run(){

    ros::Rate go(100);
    while (ros::ok()){
        ros::spinOnce();
        go.sleep();
    }

}



