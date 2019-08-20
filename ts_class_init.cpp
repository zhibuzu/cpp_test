#include <iostream>   
#include <string>   
using namespace std;   
class Test   
{   
private:   
    int a;   
    static int b;   
    const int c;   
    static const int d;   
public:   
    Test():c(3)    //a(1)或者在初始化列表里初始化   
    {   
        a=1;
    }   
};   
int Test::b=2; 
const int Test::d=3; 
int main()   
{   
    Test t;   
}  