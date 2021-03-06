/**********************
 *
 * ts_pointer.cpp
 *
 * 测试指针
 * ********************/
#include <iostream>

/* class Store { };
class Vertrag : public Store { };
void foo(Store **st) { }
int main() {
   Vertrag *v=new Vertrag{};
   foo(&v); // error here
   return 0;
} */
/* class Store { int value_s; };
class Vertrag : public Store { public : int value_v; };
void foo(Vertrag **st)
{
    delete *st;
    *st = new Vertrag;
}
int main() {
//    Vertrag *v=new Vertrag{};
//    Vertrag ** temp = &v;
    Store *v = new Store;
    Store ** temp = &v;
   foo(temp); // error here
   v->value_v = 7;
   return 0;
} */

class Store { };
class Vertrag : public Store { };
class No2 : public Store { };
int main()
{
	Vertrag v;
	Vertrag* vptr = &v;
	Vertrag** vptrptr = &vptr;
	Store** store = vptrptr; //error!
	// And why it is an error:
	No2 no2;
	No2* no2ptr = &no2;
	*store = no2ptr;
	// you now have a (Vertrag *) pointing to a (No2 *),
	// even though neither is a subclass of the other!!
	// (basically, you are making the variable vptr point to no2ptr)


	return 0;
}