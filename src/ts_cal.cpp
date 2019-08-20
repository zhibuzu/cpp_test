#include <string>
#include <iostream>

int main() {
    uint64_t counter = 3;
    fprintf(stdout, "res: %llu\n", (uint64_t)(counter - 50));
    std::cout << counter - 50 << std::endl;

    return 0;
}