#include <iostream>
 
struct Empty {};
struct Base { int a; };
struct Derived : Base { int b; };
struct Bit { unsigned bit: 1; };
 
int main()
{
    Empty e;
    Derived d;
    Base& b = d;
    Bit bit;
    int a[10];
    std::cout << "size of empty class: "              << sizeof e          << '\n'
              << "size of pointer : "                 << sizeof &e         << '\n'
//            << "size of function: "                 << sizeof(void())    << '\n'  // 错误
//            << "size of incomplete type: "          << sizeof(int[])     << '\n'  // 错误
//            << "size of bit field: "                << sizeof bit.bit    << '\n'  // 错误
              << "size of array of 10 int: "          << sizeof(int[10])   << '\n'
              << "size of array of 10 int (2): "      << sizeof a          << '\n'
              << "length of array of 10 int: "        << ((sizeof a) / (sizeof *a)) << '\n'
              << "length of array of 10 int (2): "    << ((sizeof a) / (sizeof a[0])) << '\n'
              << "size of the Derived: "              << sizeof d          << '\n'
              << "size of the Derived through Base: " << sizeof b          << '\n';

    std::cout << "b.a: " << b.a << '\n';
              //<< "b.b: " << b.b << '\n'; // 错误
 
}