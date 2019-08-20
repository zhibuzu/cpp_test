#include "ts_fun.h"

// typedef int (*p_add)(int n);

// int add_fun(int n) {
//     return ++n;
// }

int main() {

    // p_add add_fun1 = add_fun;
    // int res = add_fun1(10);
    // std::cout << res << std::endl;

    int arg = 10;
    fun::Fun fn(arg);
    int res = fn.get_n();
    std::cout << res << std::endl;

    return 0;
}