/**********************
 *
 * support.cpp
 *
 * Support test extern with main.cpp
 *
 *
 * ******************/

#include <iostream>
using namespace std;

extern int g;

//int g = 10;

//void write_extern(void)
//{
//  std::cout << "Count is " << count << std::endl;
//}

int main()
{
    cout << g << endl;    

    return 0;
}
