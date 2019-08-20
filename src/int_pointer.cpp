/***********
 * 
 * pointer.cpp
 *
 * ****************/
#include <iostream>

int main()
{
    int n = 10;
    int *pn = &n;

    printf("n is %d\n", n);
    printf("*pn is %d\n", *pn);
    //printf("pn is %d\n", pn);

    std::cout << "cout n is " << n << std::endl;
    std::cout << "cout *pn is " << *pn << std::endl;
    std::cout << "cout pn is " << pn << std::endl;
}
