/*************************
 *
 * map_01.cpp
 *
 *
 * **************************/
#include <iostream>
#include <string>
#include <map>

using std::string;
using std::map;

int main()
{
    map<string, float> m;

    m["Jack"] = 10000;
    m["Jesse"] = 7400.22;
    
    map<string, float>::iterator it;
    for (it = m.begin(); it != m.end(); it++) {
        printf("the salary of %s is %.2f\n", (*it).first.c_str(), (*it).second);   
    }

    return 0;
}
