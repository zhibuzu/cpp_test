<<<<<<< HEAD
#include <iostream>
#include <string>

#define GET_ARRAY_LEN(array, len) { \
    len = (sizeof(array) / sizeof(array[0])); \
} \

int main(int argc, char ** argv) {
    // char * optarg = "../tera_tool/conf/tera.flag";
    char str1[100] = {0};

    int i = 0;
    // int arg_c;
    // GET_ARRAY_LEN(argv, arg_c);
    // std::cout << arg_c << std::endl;
    // for (; i < argc; ++i) {
    //     std::cout << argv[i] << std::endl;
    // }

    snprintf(str1, 100, "%s", argv[0]);
    std::cout << str1 << std::endl;

    std::string str2;
    str2.assign(str1);
    // snprintf(str2, 100, "%s", argv[0]);
    std::cout << str2 << std::endl;

    std::string str3(str1);
    std::cout << str3 << std::endl;

    char * url_str = new char[100];
    const char * url = "http://www.baidu.com/";
    snprintf(url_str, 100, "%.*s", 4, url);
    std::cout << url_str << std::endl;
    std::cout << strlen(url_str) << std::endl;
    delete [] url_str;

=======
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
>>>>>>> cdca08ffba53f6a40e3c6ceed298c814be87681b
    return 0;
}