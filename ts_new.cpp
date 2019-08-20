#include <iostream>
#include <string>

struct Test {
    char * string;
};

int main() {
    char *p;
    try {
        p = new char[80 * 1024 * 1024 * 1024];
        // memset(p, 1, 80 * 1024 * 1024 * 1024);
    } catch (std::bad_alloc& e) {
        std::cout << "alloc memory failed" << std::endl;
        return -1;
    }

    if (p == NULL) {
        std::cout << "alloc memory failed" << std::endl;
        return -1;
    }
    delete [] p;
    return 0;
}