#include <iostream>

int main(void) {
     char ss[100] = "hello";
     char * s = strchr(ss, 'o');
    *s = '\0';
    // std::cout << *s << std::endl;
    std::cout << ss << std::endl;
    return 0;
}