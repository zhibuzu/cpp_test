#include <iostream>
#include <string>

using namespace std;

#define Conn(x,y) x##y

// int incream(int *m)
//     ++(*m);

//     return *m;
// }

int main() {
    const int n = 1;
    // int *m = &n;
    // int m = incream(&n);
    // cout << m << endl;

    int nn = Conn(123, 456);
    cout << nn << endl;

    // const char *ss = Conn("hello", "world");
    // cout << ss << endl;

    char *str = new char[100];
    const char *str1 = str;
    fprintf(stdout, "char *str: %s\n", str);
    fprintf(stdout, "const char *str1: %s\n", str1);
    // *str1 = 'x';
    *str = 0x31;
    fprintf(stdout, "char *str: %s\n", str);
    fprintf(stdout, "const char *str1: %s\n", str1);

    delete [] str;
    str = NULL;

    return 0;
}