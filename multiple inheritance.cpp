//multiple inheritance
//
#include<iostream>
using namespace std;
class A
{
public:
int a;
void get()
{
cout<<"enter the value of a=";
cin>>a;
}
};
class B
{
public:
int b;
void get1()
{
cout<<"enter the value of b=";
cin>>b;
}
};
class C: public A, public B
{
public:
void sum()
{
cout<<a+b;
}
};
main()
{
C obj;
obj.get();
obj.get1();
obj.sum();
}
