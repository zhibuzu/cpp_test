// virtual函数可以由子类重新实现，从而具有多态特性，也可以不实现
// pure virtual函数必须由子类重新实现，若要构造Base类，则Base类也要实现pure virtual函数
// 总之就是：构造的当前类必须有pure virtual函数的实现
// pure virtual函数的Base类为abstract class，不允许Base类 new object
#include <iostream>
#include <string>
#include <map>

using namespace std;

//定义函数指针
typedef void* (*create_fun)();

// template<typename C, typename T>
// class Base
// {
// public:Base(){}
// public:
//        C print(T res){cout<<"Base"; }
// };
 
class Base {
public:
    Base() {};
    virtual ~Base() {};
public:
    virtual void print() {
        cout << "Base" << endl;
    }

    virtual void show() = 0;

    void test() {
        cout << "Test Base" << endl;
    }
};

void Base::show() {
    cout << "show Base" << endl;
}

class Aa : public Base {
public:
    Aa() {};
    ~Aa() {};
public:
    void print() {
        cout << "Aa" << endl;
    }    

    void show() {
        cout << "show Aa" << endl;
    }

    // void test() {
    //     cout << "Test Aa" << endl;
    // }
};

class Bb : public Base {
public:
    Bb() {};
    ~Bb() {};
public:
    void print() {
        cout << "Bb" << endl;
    }    

    void show() {
        cout << "show Bb" << endl;
    }
};
 
int main()
{
    //    Base<void, void* > *point=new Base<void, void* >();
    //    int *res;
    //    point->print(res);
    //    delete point;
    //    point = NULL;

    //    map<string, Base<void, int> > class_map;
    //    class_map.insert({"int", *point});

    // Base *base = new Base(); // error: unimplemented pure virtual method 'show' in 'Base'
    // base->print();
    // delete base;

    Aa *aa = new Aa();
    aa->print();
    aa->show();
    aa->test();
    delete aa;

    Base *ba = new Aa();
    ba->print();
    ba->show();
    ba->test();
    delete ba;

    Base *bb = new Bb();
    bb->print();
    bb->show();
    delete bb;
} 