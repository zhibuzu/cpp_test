/********************
 * 
 * ts_local_var.cpp
 * 
 * 测试函数的局部变量在返回其指针或引用或发生什么
 * 
 * *********************/
#include <iostream>
using namespace std;

int increase()
{
    int local_var = 1;
    ++local_var;
    throw local_var;
    return local_var;
}

int main()
{
    printf("%d", (increase()));

    return 0;
}
