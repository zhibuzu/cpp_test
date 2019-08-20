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

    return 0;
}