#include <iostream>
#include <fstream>
#include <string>
#include <deque>

int main(void) {
    std::deque<std::string> persons(10, std::string("None"));
    std::deque<int> salarys(10, 0);

    std::deque<std::string>::iterator citer = persons.begin();
    for ( ; citer != persons.end(); ++citer) {
        (*citer).assign("hulifa");
        fprintf(stdout, "%s\n", (*citer).c_str());
        
    }

    return 0;
}