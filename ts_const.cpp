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

    const char *ss = Conn("hello", "world");
    cout << ss << endl;
}