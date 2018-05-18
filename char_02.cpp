#include <iostream>
#include <string>

int main()
{
    char buff[] = {'H', 'E', 'L'};
    char *buff_ptr = &buff[0];

    std::cout << "buff: " << buff << std::endl;
    std::cout << "buff_ptr: " << (buff_ptr + strlen(buff) - 1) << std::endl;
    
    return 0;
}
