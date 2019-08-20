#include <iostream>
#include <string>

std::string& trim(std::string &str) {
    if (str.empty()) {
        return str;
    }

    str.erase(0, str.find_first_not_of(" \t"));
    str.erase(str.find_last_not_of(" \t") + 1);
    return str;
};


int main(void) {
    std::string str = "     hfello ";
    // size_t p1 = str.find_first_not_of("ehxl");
    // std::cout << "p1: " << p1 << std::endl;

    str = trim(str);
    fprintf(stdout, "str:%s|\n", str.c_str());


    return 0;
}