#include <iostream>
#include <string>
#include <map>

using namespace std;

//定义函数指针
typedef void* (*create_fun)();

template<typename C, typename T>
class Base
{
public:Base(){}
public:
       C print(T res){cout<<"Base"; }
};
 
 
int main()
{
       Base<void, void* > *point=new Base<void, void* >();
       int *res;
       point->print(res);


    //    map<string, Base<void, int> > class_map;
    //    class_map.insert({"int", *point});
} 