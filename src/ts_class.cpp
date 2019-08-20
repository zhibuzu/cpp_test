#include <iostream>  
#include <string>  
using namespace std;  
class Test  
{  
public:  
    Test(string n)  
    {  
        cout<<n<<endl;  
    }  
};  
class Base  
{  
public:  
    static Test* a;  
    Test* b;  
    Test* c;
    Base():b(new Test("b"))  
    {  
        c=new Test("c");  
    }  
    virtual ~Base()  
    {  
        if(a) delete a;//似乎是很欠妥的做法  
        if(b) delete b;  
        if(c) delete c;  
    }  
};  
Test* Base::a=new Test("a");  
class Derived:Base  
{  
public:  
    static Test* da;  
    Test* db;  
    Test* dc;
    Derived():db(new Test("db"))  
    {  
        dc=new Test("dc");  
    }  
    ~Derived()  
    {  
        if(da) delete da;//似乎是很欠妥的做法  
        if(db) delete db;  
        if(dc) delete dc;  
    }  
};  
Test* Derived::da=new Test("da");  
  
int main()  
{  
    Derived d;  
}