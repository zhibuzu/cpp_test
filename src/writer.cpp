/*******************
 *
 * writer.cpp
 *
 * hulifa
 * ****************/
#include <iostream>
#include <fstream>
#include <string>
#include "lm.helloworld.pb.h"
using namespace std;

int main()
{
    lm::helloworld msg1;
    msg1.set_id(101);
    msg1.set_name("hulifa");

    // write the helloworld to disk
    fstream output("./log", ios::out | ios::trunc | ios::binary);

    if (!msg1.SerializeToOstream(&output)) {
        std::cerr << "Failed to write msg." << std::endl;
        return -1;
    }
    return 0;
}
