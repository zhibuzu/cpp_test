/********************
 * 
 * ts_string.cpp
 * 
 * æµ‹è¯•stringç±»åž‹ç‰¹æ€?
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

    // char char_arr[] = "abcefä¸€ï¼?";
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

    // const string str = "hello world!";
    // for (const char &s : str) {
    //     // s = toupper(s);
    //     cout << s;
    // }

    // cout << endl << *str.begin() << endl;

    // const char* dict_file_name = "";
    // char c1 = dict_file_name[0];
    // cout << c1 << endl;
    // cout << (c1 == '0') << endl;
    
    // string str = "0000000000000000a0";
    // unsigned long long ll = stoll(str, nullptr, 16);
    // cout << ll << endl;



    // cout << sizeof(char) << endl;
    // cout << sizeof(int) << endl;
    // cout << sizeof(unsigned long) << endl;
    // cout << sizeof(long long) << endl;

    // const char * str1 = "hello";
    // cout << "str1[5] == '\\0': " << (str1[5] == '\0') << endl;
    // fprintf(stdout, "strlen of str1 len: %lu\n", std::strlen(str1));
    // fprintf(stdout, "sizeof str1 len: %lu\n", sizeof(char *));
    // fprintf(stdout, "str1[0]: %c\n", (*str1));
    // char chararr[5] = "hell";
    // fprintf(stdout, "strlen of chararr len: %lu\n", strlen(chararr));
    // fprintf(stdout, "sizeof chararr len: %lu\n", sizeof(chararr));
    // fprintf(stdout, "chararr[1]: %c\n", (*(chararr + 1)));

    

    // const char * str11;
    // // Segmentation fault
    // // cout << "str11[0] == '\\0': " << str11[0] << endl;

    // string str2 = "hello";
    // cout << "str2 == hell0: " << (str2 == "hello") << endl;
    // fprintf(stdout, "%c\n", str2[0]);
    // fprintf(stdout, "str2 len: %lu\n", str2.length());

    char cr[100] = ":\\f0";
    // char * pc = cr;
    // fprintf(stdout, "pc: %s\n", pc);

    int len = strlen(cr);
    fprintf(stdout, "len: %d\n", len);

    int counter = 0;
    int byte = *cr;
    counter = (counter << 8) | byte;
    fprintf(stdout, "byte: %d\n", byte);
    fprintf(stdout, "counter: %d\n", counter);

    char high_str = 'f';
    char low_str = '0';
    int low = 0;
    int hight = 0;

    if (low_str >= '0' && low_str <= '9') {
        low = low_str - '0';
    } else if (low_str >= 'a' && low_str <= 'f') {
        low = 10 + (low_str - 'a');
    }
    fprintf(stdout, "low: %d\n", low);

    if (high_str >= '0' && high_str <= '9') {
        hight = high_str - '0';
    } else if (high_str >= 'a' && high_str <= 'f') {
        hight = 10 + (high_str - 'a');
    }
    fprintf(stdout, "hight: %d\n", hight);

    int byte2 = (hight << 4) | low;
    fprintf(stdout, "byte2: %d\n", byte2);

    counter = (counter << 8) | byte2;
    fprintf(stdout, "counter: %d\n", counter);

    fprintf(stdout, "------------test multi-bytes char---------\n");
    char chrs[] = {32, 0x30, 060, 0};
    fprintf(stdout, "print chrs: [%s]\n", chrs);

    std::string str11 = "ºú";
    fprintf(stdout, "print str11: [%s]\n", str11.c_str());

    uint32_t t = 15223332;
    std::string s = std::to_string(t);
    fprintf(stdout, "s: %s\n", s.c_str());

    return 0;
}