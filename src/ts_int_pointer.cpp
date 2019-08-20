#include <iostream>

int main(void) {
    int int1 = 1;
    int int2 = 2;
    int * pint1 = &int1;
    const int * cpint1 = &int2;

    // error: read-only variable is not assignable
    // *cpint1 = 3;
    cpint1 = pint1;
    std::cout << "cpint1 address:" << cpint1 << std::endl;
    std::cout << "pint1 address:" << pint1 << std::endl;
    std::cout << "cpint1 value:" << *cpint1 << std::endl;

    int ** ppint1 = &pint1;
    const int ** cppint1 = &cpint1;
    // cppint1 = ppint1;
    *cppint1 = *ppint1;
    std::cout << "cppint1 addr:" << cppint1 << std::endl;
    std::cout << "cppint1 val:" << *cppint1 << std::endl;
    std::cout << "cppint1 val2:" << **cppint1 << std::endl;
    // **cppint1 = **ppint1;

    return 0;
}