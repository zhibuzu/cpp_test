/*******************************************
 * sizeof.cpp
 *
 * Display size of c++ data type
 *
 * Hulifa
 * 2018/01/21
 *
 *******************************************/

#include <iostream>
#include <string>
// #include <vector>

using namespace std;

int main(void)
{
    cout << "Size of char : " << sizeof(char) << endl;
    cout << "Size of int : " << sizeof(int) << endl;
    cout << "Size of short int : " << sizeof(short int) << endl;
    cout << "Size of long int : " << sizeof(long int) << endl;
    cout << "Size of float : " << sizeof(float) << endl;
    cout << "Size of double : " << sizeof(double) << endl;
    cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;
    cout << "Size of long double : " << sizeof(long double) << endl;
    cout << "Size of string : " << sizeof(string) << endl;
    // cout << "Size of vector : " << sizeof(vector) << endl;

    const char *str;
    cout << "Size of char array : " << sizeof str << endl;
    cout << "Size of char array point : " << sizeof *str << endl;

    int x[10];
    int *p = x;
    cout << "Size of int array : " << sizeof(x) << endl;
    cout << "Size of int array first item : " << sizeof(*x) << endl;

    cout << "Size of p pointer : " << sizeof(p) << endl;
    cout << "Size of p point object : " << sizeof(*p) << endl;

    return 0;
}
