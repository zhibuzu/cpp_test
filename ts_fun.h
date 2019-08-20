#include <iostream>
#include <map>
#include <string>
#include "comm.h"

namespace fun {

class Fun {
public:
    Fun(int arg) {
        std::cout << "exec Func construction" << std::endl;
        n = num;
        p_add_map = {
            {"add", add_fun}
        };
    };
    ~Fun() {
        std::cout << "exec Func destuction" << std::endl;
    };
public:
    int get_n() {
        return n;
    }
private:
    int n;  
    std::map<std::string, p_add> p_add_map; 
}; // class: Fun

} // namespace: fun
