//hybrid inheritance 
#include<iostream>
using namespace std;
class A
{
public:
int a, b;
A()
{
cout<<"enter the value of a=";
cin>>a;
cout<<"enter the value of b=";
cin>>b;
}
};
class B:public A
{
public:
void sum()
{
cout<<"sum ="<<a+b<<endl;
}
};
class C
{
public:
int c;
C()
{
cout<<"enter the value of c=";
cin>>c;
}
};
class D:public B,public C
{
public:
void multi()
{
cout<<"multiplication is ="<<a*b*c;
}
};
main()
{
D obj;
obj.sum();
obj.multi();
}
