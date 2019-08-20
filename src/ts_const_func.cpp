#include <cstdio>

class Base {
public:
    Base() : _index(0) {

    }
    ~Base() {

    }
public:
    int add() {
        return ++_index;
    }

    int get_index() const {
        return _index;
    }
private:
    int _index;
};

int main() {
    Base *base = new Base();
    int add_res = base->add();
    int index_res = base->get_index(); 
    fprintf(stdout, "add() res: %d\n", add_res);
    fprintf(stdout, "get_index() res: %d\n", index_res);
    delete base;

    const Base *cbase = new Base();
    // add_res = cbase->add();
    index_res = cbase->get_index(); 
    fprintf(stdout, "add() res: %d\n", add_res);
    fprintf(stdout, "get_index() res: %d\n", index_res);
    delete cbase;
}