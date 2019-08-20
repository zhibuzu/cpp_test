#include <iostream>

namespace ts_enum {

enum ErrorCode  {
    PARAM_ERR = -1,
    RET_OK = 0,
    RET_ERR = 1,
    SUCCESS = 0,
    INVALID_PARAMETER,
};
// 可以设置多个不同元素为相同的值

ErrorCode add(int n, int m, int &r) {
    std::cout << "RET_OK: " << RET_OK << std::endl;
    if (n < 10) {
        return RET_ERR;
    }
    r = n + m;
    return RET_OK;
};

}; 

class Add {
public:
    enum ErrorCode {
        PARAM_ERR = -1,
        RET_OK = 0,
        RET_ERR = 1
    };
};

// using namespace ts_enum;

// enum RetCode {
//     PARAM_ERR = -1,
//     RET_OK = 0,
//     RET_ERR = 1
// };


int main() {
    int r;
    ts_enum::ErrorCode ret = ts_enum::add(1, 2, r);
    std::cout << ret << std::endl;
    std::cout << r << std::endl;
    std::cout << Add::RET_ERR << std::endl;


    ts_enum::ErrorCode err_code = ts_enum::ErrorCode(30);
    std::cout << "err_code: " << err_code << std::endl;

    std::cout << "ErrorCode::SUCCESS: " << ts_enum::SUCCESS << std::endl;
    std::cout << "ErrorCode::INVALID_PARAMETER: " << ts_enum::INVALID_PARAMETER << std::endl;
    std::cout << "ErrorCode::INVALID_PARAMETER + 1: " << ts_enum::INVALID_PARAMETER + 1 << std::endl;
}