#include "communication/Publisher.hpp"

using namespace PBSR;

int main(int argc, char **argv)
{
    ros::init(argc, argv, "publisher_node");
    PBSR::Publisher pbsr;
    pbsr.run();
    return 0;
}
