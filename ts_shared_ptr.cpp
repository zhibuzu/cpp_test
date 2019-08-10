#include <iostream>
#include <memory>

int main(void) {
    auto p1 = std::make_shared<int>(42);
    auto p2(p1);
    std::cout << "reference count:" << p1.use_count() << std::endl;
    std::cout << "reference count:" << p2.use_count() << std::endl;

    auto p3 = std::make_shared<int>(98);
    std::cout << "reference count:" << p3.use_count() << std::endl; // 1
    p1 = p3;
    std::cout << "reference count:" << p1.use_count() << std::endl; // 2
    std::cout << "reference count:" << p2.use_count() << std::endl; // 1
    std::cout << "reference count:" << p3.use_count() << std::endl; // 2
}