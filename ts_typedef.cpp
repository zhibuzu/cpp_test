#include <iostream>

int func(int n) {
    return ++n;
}

int *pfunc(int *m) {
    ++(*m);
    return m;
}

// char * const * (*next)(char const * cur);

char * const * next(char * const cur, char * const * res) {
    res = &cur;
    return res;
}

int (* func2())(int n);

int *func2() {
    return func;
}

int main() {
    int res = (*func)(10);
    std::cout << res << std::endl;

    int n = 20;
    res = *((*pfunc)(&n));
    std::cout << res << std::endl;

    
    char * const cur = new char[100];
    snprintf(cur, 100, "%s", "hello kitty");
    // std::cout << cur << std::endl;
    char * const * ret;
    char * const * pcur = (*next)(cur, ret);
    std::cout << *pcur << std::endl;
    std::cout << *ret << std::endl;
    delete [] cur;


    int nn = (* func2())(n);
    std::cout << nn << std::endl;
    return 0;
}