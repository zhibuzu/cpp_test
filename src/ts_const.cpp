#include <iostream>
#include <string>

using namespace std;

#define Conn(x,y) x##y

// int incream(int *m)
//     ++(*m);

//     return *m;
// }

const char * func() {
    return "hello world!";
}

int main() {
    const int n = 1;
    // int *m = &n;
    // int m = incream(&n);
    // cout << m << endl;

    int nn = Conn(123, 456);
    cout << nn << endl;

<<<<<<< HEAD
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
=======
    const char *ss = Conn("hello", "world");
    cout << ss << endl;

    cout << func() << endl;
>>>>>>> cdca08ffba53f6a40e3c6ceed298c814be87681b
}