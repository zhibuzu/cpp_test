// test snprintf
// int snprintf ( char * s, size_t n, const char * format, ... );
// feature1: 一个'\0'字符会自动加到结果字符串s后面在写入s之后
// feature2: 返回写入s的字节数，是否包括'\0'
// feature3: 可写入的最大字节数，是否包括'\0'
#include <cstring>
#include <cstdio>

int main(int argc, char *argv[]) {
    char buf[100] = {0};
    char buf2[] = "hulifa";
    // char str[100] = {0};
    {
        snprintf(buf, 100, "%s", "hulifa");
        snprintf(buf, 100, "%s+%s", buf, "hulifa");
        snprintf(buf, 100, "%s+%s", buf, "hulifa");
    }
    
    printf("str is [%s]\n", buf);
    return 0;
}