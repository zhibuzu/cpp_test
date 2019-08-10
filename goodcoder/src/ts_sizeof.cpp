#include <iostream>

int main(void) {
    int p = 10;
    int apple = sizeof(int) * p;
    std::cout << apple << std::endl;

    return 0;
}