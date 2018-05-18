/**********************
 *
 * snprintf.cpp
 *
 * *********************/
#include <iostream>
#include <sstream>
#include <stringstream>
#include <string>



const int MAX_VALUE_LEN = 50;

int main()
{
    printf("-----------demo1-----------\n");
    char s[5];
    int ret = snprintf(s, 3, "%s", "abcdefg");

    printf("%d\n", ret);
    printf("%s", s);

    printf("\n-------demo2----------\n");
    uint32_t create_time = 1464430422;
    char value_buf[MAX_VALUE_LEN] = {0};
    snprintf(value_buf, MAX_VALUE_LEN, "%u", create_time);
    printf("value: %s\n", value_buf);
    printf("length: %lu\n", sizeof(value_buf));
    printf("origin value length: %lu", sizeof(create_time));

    printf("\n------demo3----------\n");
    uint32_t nbytes = 20;
    char value_buf2[nbytes];
    snprintf(value_buf2, nbytes, "%u", create_time);
    printf("value: %s\n", value_buf2);
    printf("length: %lu\n", sizeof(value_buf2));

    printf("\n------demo4----------\n");
    std::stringstream ss;
    std::string value_buf3;
    ss << create_time;
    value_buf3 << ss;
    
    printf("value: %s\n", value_buf3);
    printf("length: %lu\n", sizeof(value_buf3));

    return 0;
}
