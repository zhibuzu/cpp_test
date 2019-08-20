#include <cstdio>
#include <cstring>

int add(int a, int b = 10) {
    return a + b;
}

int main() {
    printf("res1: %d\n", add(1));
    printf("res2: %d\n", add(1, 1));


    return 0;
}