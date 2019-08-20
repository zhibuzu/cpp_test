#include <iostream>

using namespace std;

int main () {
    char str1[10] = {'0', '1'};
    char * str2 = str1;
    
    cout << "str1: " << str1 << endl;
    cout << "str1[0]: " << str1[0] << endl;
    cout << "str1[0]: " << *str1 << endl;
    cout << "str1[1]: " << str1[1] << endl;
    cout << "str1[1]: " << *(str1 + 1) << endl;
    cout << "str2: " << str2 << endl;

    cout << "str1[0] == '0': " << (str1[0] == '0') << endl;
    cout << "str1[0] == 0: " << (str1[0] == 0) << endl;

    const char * str3 = "";
    const char * str4;
    cout << "str3[0] == '\\0':" << (str3[0] == '\0') << endl;
    cout << "str3[0] == 0:" << (str3[0] == 0) << endl;
    // cout << "str4[0] == '\\0':" << (str4[0] == '\0') << endl;
    // cout << "str4[0] == 0:" << (str4[0] == 0) << endl;

    char line_buf[1024] = "56583fa683560938_00\t16";
    cout << line_buf << endl;

    char str5[] = "hello";
    cout << sizeof(str5) << endl;

    char * name = new char[100];
    // cout << sizeof(name) << endl;

    return 0;
}