/***************
 *
 * refer.cpp
 *
 * 引用类型
 *
 * ************/

#include <iostream>

int main()
{
    int v1 = 1234, &r1 = v1;
    std::cout << "Before r1 is " << r1 << std::endl;

    r1 = 2234;
    std::cout << "After r1 is " << r1 << std::endl;

    printf("v1 is %d\n", v1);

    int v2 = r1;
    printf("v2 is %d\n", v2);
    
    return 0;
}
