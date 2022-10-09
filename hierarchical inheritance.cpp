//hirercial inheritance
//
#include<iostream>
using namespace std;
class A
{
public:
int a,b;
void get()
{
cout<<"enter the value of a=";
cin>>a;
cout<<"enter the value of b=";
cin>>b;
}
};
class B: public A
{
public:
int c;
void sum()
{
cout<<"sum="<<a+b<<endl;
}
};
class C: public A
{
public:
void multi()
{
cout<<"multiplication ="<<a*b;
}
};
main()
{
B obj1;
C obj2;
obj1.get();
obj1.sum();
obj2.get();
obj2.multi();
}
