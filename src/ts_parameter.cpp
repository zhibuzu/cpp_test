/***************************
 * 
 * ts_parameter.cpp
 * 
 * 测试函数参数传递使用值传递，指针传递，引用传递的区别
 * **************************/
#include <iostream>

void GetMemory(char *p) {
    p = (char *)malloc(100);
}

void GetMemory_1(char* &p) {
    p = (char *)malloc(100);
}

void GetMemory_2(char **p) {
    *p = (char *)malloc(100);
}

void Test(void) {
    char *str = NULL;
    // GetMemory(str);
    GetMemory_1(str);
    GetMemory_2(&str);                           

    strcpy(str, "Hello, world.");
    printf("%s", str);
}

int main () {
    Test();

    return 0;
}