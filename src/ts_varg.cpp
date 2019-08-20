/**
 * 可变参数函数
 */
#include <iostream>
#include <stdarg.h>

using namespace std;

void print_arg(int i, ...) {
    va_list vl;
    va_start(vl, i);

    // 获取可变参数第一个
    void * j = va_arg(vl, void *);
    int * jj = (int *)j;
    *jj = 2; 
    // cout << *j << endl;

    const char * k = va_arg(vl, const char *);
    cout << k << endl;
    va_end(vl);
}

int main() {
    // print: 2
    
    // print_arg(1, 2, "am");

    // print_arg(1, 2, "hello");

    int n = 1;
    const char * cs = "hello";
    print_arg(1, &n, cs);
    cout << "n: " << n << endl;
}