#include <iostream>
#include <string>

int main() {
    char achr[100] = {0};
    int aint[100] = {1};
    long long allo[100] = {1};
    std::cout << "size of achr: " << sizeof(achr) << std::endl; // size of achr: 100
    std::cout << "size of aint: " << sizeof(aint) << std::endl; // size of aint: 400
    std::cout << "size of allo: " << sizeof(allo) << std::endl; // size of allo: 800

    const char * schr = "12345";
    std::cout << "size of schr: " << sizeof(schr) << std::endl; // size of schr: 8

    char achr1[] = "12345";
    std::cout << "size of achr1: " << sizeof(achr1) << std::endl; // size of achr1: 8
    std::cout << "len of achr1: " << strlen(achr1) << std::endl; // len of achr1: 5

    return 0;
}