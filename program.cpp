#include <iostream>
#include "abc.h"
using namespace std;
int main()
{
abc obj;
abc obj2(2, 3, 5.5);
obj.a = obj.b + obj.c;
cout<< obj.a<<endl;
cout<< obj.b<<endl;
cout<< obj2.a <<endl<< obj2.b <<endl<<obj2.c<<endl;
}