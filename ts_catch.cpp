/********************
 * 
 * ts_catch.cpp
 * 
 * 测试c++异常机制特性
 * 
 * *****************/
#include <iostream>
using namespace std;

int main()
{
    int score = 0;
    while (cin >> score)
    {
        try
        {
            if (score > 100 || score < 0)
            {
                throw score;
            }
            //将分数写入文件或进行其他操作
        }
        catch (int score)
        {
            cerr << "你输入的分数数值有问题，请重新输入！";
            continue;
        }
    }
}