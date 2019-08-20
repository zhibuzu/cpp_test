/************************
 * string.cpp
 *
 * Test string feature
 *
 * Hulifa
 * 2018/01/21
 *
 * ***********************/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s("some string");

    //printf("hello\tworld!\n");
    //printf("\u4E2D\n");
    printf("%s\n", s.c_str());

    for (auto it = s.begin(); it != s.end() && !isspace(*it); it++) {
        *it = toupper(*it);    
    }


    printf("%s\n", s.c_str());

    return 0;
}
