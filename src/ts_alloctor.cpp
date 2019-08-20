#include <iostream>
#include <vector>
#include <string>
#include <unistd.h>

int main() {

    std::vector<char *> vec;  
    for (int i = 0; i < 5000; ++i) {
        char *str = new char[1000];
        snprintf(str, 1000, "%s", "abcdefghijklmnopqrstuvwsyz");
        vec.push_back(str);
    }

    sleep(30);
    for (int i = 0; i < vec.size(); ++i) {
        delete vec[i];
        vec[i] = NULL;
    }
    vec.clear();
    // std::vector<char *>(vec).swap(vec);
    sleep(30);
    return 0;
}