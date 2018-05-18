/**************
 *
 * point.cpp
 *
 *
 * 指针类型
 *
 * ************/
#include <iostream>

int main()
{
    int* p1, v1 = 10;
    p1 = &v1;

    std::cout << "The pointer point value is " << *p1 << std::endl;

    return 0;
}
