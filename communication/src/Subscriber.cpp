#include "communication/Subscriber.hpp"

using namespace SBCR;

Subscriber::Subscriber():n("~") {



}

void Subscriber::run(){

    ros::Rate go(100);
    while (ros::ok()){
        ros::spinOnce();
        go.sleep();
    }

}



