/*******************
 * ts_split.cpp
 * ****************/
#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <vector>

int main() {
    char* str;
    strcpy(str, "abc|efg;ic; q");
    // char str[] = "abc|efg;ic; q";
    const char* delim = "|";
    char* tmp = strtok(str, delim);

    while(tmp != NULL) {
        printf("%s\n", tmp);
        tmp = strtok(NULL, " ");
    }

    return 0;
}
