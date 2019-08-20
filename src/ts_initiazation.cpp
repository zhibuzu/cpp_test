#include <iostream>
#include <string>

class Test {
public:
    std::string _name;
    Test(std::string n) {
        _name = n;
        std::cout << _name << std::endl;
    }
};

class Base {
public:
    static Test * a;
    Test * b;
    Test * c;

    Base() : b(new Test("b")) {
        std::cout << this->a->_name << std::endl;
        c = new Test("c");
    }

    virtual ~Base() {
        if (a) delete a;
        if (b) delete b;
        if (c) delete c;
    }
};

Test * Base::a = new Test("a");

class Derived:Base 
{ 
public: 
    static Test* da;
    static Test* a; 
    Test* db; 
    Test* dc;
    Derived():db(new Test("db")) 
    { 
        // std::cout << a->_name << std::endl;
        dc=new Test("dc"); 
    } 
    ~Derived() 
    { 
        if(da) delete da;//似乎是很欠妥的做法 
        if(db) delete db; 
        if(dc) delete dc; 
    }
    Test * get_da() const {
        return this->a;
    }
}; 
Test* Derived::da=new Test("da"); 
Test* Derived::a=new Test("Derived a"); 

int main(int argc, char *argv[]) {
    // Derived dd;
    // std::cout << (dd.a)->_name << std::endl;
    const Derived db;
    Test * p_da = db.get_da();
    std::cout << p_da->_name << std::endl;

    return 0;
}