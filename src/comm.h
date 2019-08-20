int num = 100;

typedef int (*p_add)(int n);

int add_fun(int n) {
    return ++n;
}