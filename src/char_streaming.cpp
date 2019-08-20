/******************
 *
 * char_streaming.cpp
 *
 * ********************/
#include <iostream>

int main()
{
    std::cout << "Give a string: ";

    char str[100];
    std::cin >> str;

    char *str_ptr[100] = &str;

    std::cout << "You gived string is " << *str_ptr << std::endl;

    return 0;
}
