#include <iostream>

void foo1(const char ** argv) {

}

void foo2(const char * argv) {

}

int main(int argc, char ** argv) {
    // note: candidate function not viable: no known conversion from 'char **' to 'const char **'
    // foo1(argv);

    // ok
    foo2(*argv);

    char a_char1[100] = "hello";
    const char * cp_char1 = "jesse";
    char * p_char1 = a_char1;

    char a_char2[100] = "world";
    *p_char1 = 'w';
    std::cout << "p_char1:" << p_char1 << std::endl;

    // error: read-only variable is not assignable
    // *cp_char1 = 'w';
    // std::cout << "cp_char2:" << cp_char1 << std::endl;

    cp_char1 = p_char1;
    std::cout << "cp_char1:" << cp_char1 << std::endl;
    cp_char1 = "hulifa";
    std::cout << "p_char1:" << p_char1 << std::endl;
    std::cout << "cp_char1:" << cp_char1 << std::endl;
    // p_char1 = (char *)cp_char1;
    // p_char1 = a_char2;
    // std::cout << "p_char1:" << p_char1 << std::endl;



    return 0;
}