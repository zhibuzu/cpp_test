/****************************
 *
 * square.cpp
 *
 * A square function
 *
 * *************************/
#include <iostream>

double square(double x) 
{
    return x * x;
}

int main()
{
    double x = 2.2;
    std::cout << "The square of " << x << " is " << square(x) << std::endl;    
}
