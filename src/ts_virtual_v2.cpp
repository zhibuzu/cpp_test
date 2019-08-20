#include <iostream>

class Base {
public:
    Base () {};
    virtual ~Base() {
        std::cout << "[Base]destory class" << std::endl;
    };

public:
    void good_morning() {
        std::cout << "[Base]good morning" << std::endl;
    }
    virtual void good_afternoon() {
        std::cout << "[Base]good afternoon" << std::endl;
    }
    virtual void good_night() = 0;
};

void Base::good_night() {
    std::cout << "[Base]good night" << std::endl;
}

class subClass : public Base {
public:
    subClass() {};
    ~subClass() {
        std::cout << "[subClass]destory class" << std::endl;
    };
public:
    void good_morning() {
        std::cout << "[subClass]good morning" << std::endl;
    }
    void good_afternoon() {
        std::cout << "[subClass]good afternoon" << std::endl;
    }
    
    void good_night() {
        std::cout << "[subClass]good night" << std::endl;
    };
};

int main(void) 
{
    std::cout << "----------Base1---------" << std::endl;
    Base* base1 = new Base();
    base1->good_morning();
    base1->good_afternoon();
    base->good_night();
    delete base1;
    base1 = NULL;

    std::cout << "----------sub1---------" << std::endl;
    subClass* sub1 = new subClass();
    sub1->good_morning();
    sub1->good_afternoon();
    sub1->good_night();
    delete sub1;
    sub1 = NULL;

    std::cout << "----------base2---------" << std::endl;
    Base* base2 = new subClass();
    base2->good_morning();
    base2->good_afternoon();
    base2->good_night();
    delete base2;
    base2 = NULL;
}

