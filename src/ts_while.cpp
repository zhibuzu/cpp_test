#include <iostream>
#include <unistd.h>

int main () {   
    while (true) {
        std::cout << "sleep 1 s" << std::endl;
        sleep(1);
    }

    return 0;
}