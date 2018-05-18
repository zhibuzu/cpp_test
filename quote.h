/*******************
 *
 * quote.h
 *
 * 定价类头文件
 *
 * *****************/
#include <iostream>
#include <string>

class Quote 
{
    public:
        std::string isbn() const;
        virtual double net_price(std::size_t n) const;
};
