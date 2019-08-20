#include <iostream>

#define GET_ARRAY_LEN(arr) sizeof(arr) / sizeof(arr[0])

int main() {
    // get array size
    char chrs[] = {'h', 'e', 'l', 'l', 'o'};
    size_t counter = 0;
    {counter = GET_ARRAY_LEN(chrs);} // 包括字符串最后的\0字符
    fprintf(stdout, "chrs len: %lu\n", counter);

    return 0;
}