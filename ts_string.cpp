/********************
 * 
 * ts_string.cpp
 * 
 * 测试string类型特性
 * *******************/

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
    // const char* str = "hello";
    // //str = "Heello";
    // printf("%p\n", &str);
    // str = "seello";
    // printf("%p\n", &str);
    // printf("%s", str);
    // printf("%c", *str);

    // char char_arr[] = "abcef一？";
    // size_t char_len = strlen(char_arr);
    // cout << char_len << endl;
    // cout << char_arr[5] << endl;

    // char* char_p = char_arr + char_len;
    // return 1;
    // string str = "hello world";
    // str.append(" !");
    // cout << str << endl;

    // string str1(10, 'a');
    // cout << str1 << endl;

    const string str = "hello world!";
    for (const char &s : str) {
        // s = toupper(s);
        cout << s;
    }

    cout << endl << *str.begin() << endl;

    return 0;
}