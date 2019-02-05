#include "communication/Subscriber.hpp"

using namespace SBCR;

int main(int argc, char **argv)
{
    ros::init(argc, argv, "subscriber_node");
    SBCR::Subscriber sbcr;
    sbcr.run();
    return 0;
}
