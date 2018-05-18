/*********************
 *
 * char_point.cpp
 *
 * 字符类型指针
 * *******************/

#include <iostream>

int main()
{
    //char s = 'x';
    //char *name = &s;
    //std::cout << "my name is " << name << std::endl;
    
    const char* s[] = {
        "Hi",
        "hs",
        "js"
    };

    //for(int i = 0; i < 3; i++) {
      //  std::cout << s[i] << std::endl;        
    //}
    
    const char *str = "hello world.";
    std::cout << str << std::endl;
    std::cout << *str << std::endl;

    //printf("%s\n", str);
    //printf("%s\n", *str);
    
    char str1[] = "hello";
    printf("%s\n", str1);

    //const char *str_ptr1 = &str1;
    //printf("str_ptr1 is %s", str_ptr1);
    //printf("str1 first char is %c", *str_ptr1);
    
    const char* url = "http://www.baidu.com";
    std::cout << "url : " << url << std::endl;

    int url1 = 'hhhh';
    std::cout << "URL1 : " << url1 << std::endl;
    return 0;
}
