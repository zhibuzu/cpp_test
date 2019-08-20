/*******************
 *
 * enum.cpp
 *
 *
 * ***************/
#include <iostream>

enum peroid {
    younger,
    older,
    very_older
};  

int main()
{
    peroid p;
    std::cout << "You are " << p << std::endl;
    return 0;
}
