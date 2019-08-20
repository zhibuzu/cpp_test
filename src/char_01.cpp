#include <iostream>
#include <string>
//using namespace string;

int main() {
    const char *str = 'Hello world!';
    unsigned int len = strlen(str);
    const char *tail = str + len -1;
    std::cout << "say: " << str 
              << " Len: " << len 
              << " Tail: " << tail
              << std::endl;

    return 0;
}
