//multilevel inheritance
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
void get2()
{
cout<<"enter the value of c=";
cin>>c;
}
};
class C: public B
{
public:
void sum()
{
cout<<"sum ="<<a+b+c<<endl;
}
void multi()
{
cout<<"multiplication is ="<<a*b*c;
}
};
main()
{
C obj;
obj.get();
obj.get2();
obj.sum();
obj.multi();
}
