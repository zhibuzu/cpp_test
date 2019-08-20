/**********************
 *
 * map.cpp
 *
 * ********************/
#include <iostream>
#include <string>
#include <map>
using std::map;
using std::string;

int main()
{
    map<string, size_t> word_count;
    std::string word;
    while (std::cin >> word) {
        ++word_count[word];   
    }
    
    for (const auto &w : word_count) {
        printf("%s occurs %lu times\n", w.first.c_str(), w.second);    
    }
    //printf("%lu\n", word_count["hello"]);
    return 0;
}
