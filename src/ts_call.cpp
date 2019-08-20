/**********************
 * 
 * ts_call.cpp
 * 
 * 测试函数调用传参进制
 * 
 * ******************/
#include <iostream>
using namespace std;

int increase(int *num)
{
    printf("形参所在地址：%p\n", &num);
    printf("形参存放地址：%p\n", num);
    return ++*num;
}

int decrease(int &num)
{
    printf("形参所在地址：%p\n", &num);
    printf("形参指向地址：%d\n", num);
    return --num;
}

int main()
{
    // 普通变量
    //int num_c = 1;
    //int res_c = increase(num_c);

    // 指针参数
    int num = 1;
    int *base = &num;
    printf("实参所在地址：%p\n", &base);
    printf("实参存放地址：%p\n", base);
    int res = increase(base);
    printf("%d\n", res);
    printf("%d\n", *base);
    printf("%d\n", num);
    printf("res所在地址：%p\n", &res);
    printf("num所在地址：%p\n", &num);

    // 引用参数
    printf("\n\n");
    int n = 11;
    int &n_r = n;
    int res_r = decrease(n_r);
    printf("%d\n", res_r);
    printf("%d\n", n_r);
    printf("%d\n", n);
    printf("n所在地址：%p\n", &n);

    return 0;
}