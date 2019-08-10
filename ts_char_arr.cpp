// 实验char类型的数组结构特性
// 初始化
// sizeof Q:1. 对char数组是否包含\0； 2. 对utf-8字符的计算
// strlen
#include <cstdio>
#include <cstring>

int main(int argc, char *argv[]) {
    char chrs[100] = {0};
    fprintf(stdout, "the size of init chrs is %lu\n", sizeof(chrs)); // 100
    char chrs2[] = {0, 1, 2};
    fprintf(stdout, "the size of init chrs2 is %lu\n", sizeof(chrs2)); // 3
    // 在初始化的时候就确定了数组的长度, sizeof返回分配char数组的元素个数

    char chrs3[100] = {65,};
    fprintf(stdout, "the value of chrs3[0] is %c\n", chrs3[0]); // A
    fprintf(stdout, "the value of chrs3[1] is %c\n", chrs3[1]);
    // char数组若未指明初始化值，则默认为'\0'
    
    fprintf(stdout, "the len of chrs is %lu\n", strlen(chrs)); // 0
    fprintf(stdout, "the len of chrs2 is %lu\n", strlen(chrs2)); // 0
    // strlen获取的是C string从string开头到遇到的第一个null-character的长度（不包括null-character）

    char zh_chrs[100] = "我是中国人";
    fprintf(stdout, "the size of zh_chrs is %lu\n", sizeof(zh_chrs)); // 100
    fprintf(stdout, "the len of zh_chrs is %lu\n", strlen(zh_chrs)); // 15
    // sizeof, strlen返回的都是字节数，这5个中文每个占3字节

    return 0;
}
