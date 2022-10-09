//single inheritance
//ambiquity without parameterin a single inheritance
#include<iostream>
using namespace std;
class A
{
public:
int x;
void show(int y)
{
x=y;
cout<<x;
cout<<"base";
}
};
class B: public A
{
public:
int a;
void show(int b)
{
a=b;
cout<<a;
cout<<"derived";
}
};
main()
{
B obj;
obj.show(10);
}

