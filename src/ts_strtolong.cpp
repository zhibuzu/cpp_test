#include <iostream>
#include <string>


int main() {
    std::string str = "56583fa683560938_00";
    const char *sep = "_";

    // 分隔
    int sep_len = std::strlen(sep);
    int pos = str.find(sep, 0);
    std::string sent_sign_str = str;
    std::string sign_version_str = "00";
    if (std::string::npos != pos) {
        sent_sign_str = str.substr(0, pos);
        sign_version_str = str.substr(pos + sep_len);
    }
    std::cout << sent_sign_str << "\t" << sign_version_str << std::endl;

    // sent_sign_str转长整型
    uint64_t ll = stoll(sent_sign_str, nullptr, 16);
    std::cout << ll << std::endl;

    uint32_t sign_version = stoi(sign_version_str, nullptr, 16);
    std::cout << sign_version << std::endl;

    return 0;
} 