// 测试char指针的特性
// 初始化
// sizeof
// strlen
// snprintf
#include <cstdio>
#include <cstring>

int main(int argc, char *argv[]) {
    char chrs[] = {0, 1, 2};
    char *pchr = chrs;
    char chrs2[] = {1, 2, 0};
    char *pchr2 = chrs2;
    // 使用char数组初始化

    fprintf(stdout, "the size of pchr is %lu\n", sizeof(pchr)); // 8
    fprintf(stdout, "the size of *pchr is %lu\n", sizeof(*pchr)); // 1

    fprintf(stdout, "the len of pchr is %lu\n", strlen(pchr)); // 0
    fprintf(stdout, "the len of pchr2 is %lu\n", strlen(pchr2)); // 2
    // strlen: 计算char指针所指对象的开头至null-character的字节数（不包括null-character）

    char chrs3[100] = {65, 65, 65, 65};
    snprintf(chrs3, 100, "%s", pchr);
    fprintf(stdout, "the size of chrs3 is %lu\n", sizeof(chrs3)); // 100
    fprintf(stdout, "the len of chrs3 is %lu\n", strlen(chrs3)); // 0
    
    snprintf(chrs3, 100, "%s", pchr2);
    fprintf(stdout, "the size of chrs3 is %lu\n", sizeof(chrs3)); // 100
    fprintf(stdout, "the len of chrs3 is %lu\n", strlen(chrs3)); // 2
    fprintf(stdout, "the end of chrs3 is %d\n", chrs3[2] == '\0' ? 0 : 1);
    fprintf(stdout, "the end of chrs3 is %c\n", chrs3[3]);
    // snprintf会用pchr2的字节不断替换chrs3的字节，直到pchr2遇到了null-character或达到最大字节数100-1（替换包括null-character）
    
    return 0;
}