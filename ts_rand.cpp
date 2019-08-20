#include <iostream>
#include <ctime>
#include <map>

const int MAX = 10;
const int COUNT = 10000000;

int main() {
    // srand(time(NULL));
    // int n = rand();
    // std::cout << n % 100 << std::endl;

    std::map<int, int> occur;
    for (int i = 0; i < COUNT; ++i) {
        srand(i);
        ++occur[rand() % 10];
    }

    for(std::map<int, int>::iterator it = occur.begin(); it != occur.end(); ++it) {
        std::cout << it->first << " : " << it->second << std::endl;
    }

    return 0;
}