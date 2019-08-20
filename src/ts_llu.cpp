#include <iostream>
#include <string>

int main() {
    // std::string counter_str = "4";
    std::string counter_str = "7fffffffffffd6a2";
    long long counter = strtoll(counter_str.c_str(), nullptr, 16);
    fprintf(stdout, "counter: %lld\n", counter);

    return 0;
}