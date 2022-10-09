//hybrid inheritance 
#include<iostream>
using namespace std;
class student
{
public:
int rollno;
char name[30];
void getinfo()
{
cout<<"enter the roll no=";
cin>>rollno;
cout<<"enter the name=";
cin>>name;
}
};
class detail:public student
{
public:
void showinfo()
{
cout<<rollno<<endl;
cout<<name<<endl;
}
};
class average
{
public:
int s1,s2,s3;
void sub()
{
cout<<"enter the maths marks=";
cin>>s1;
cout<<"enter the science marks=";
cin>>s2;
cout<<"enter the english marks=";
cin>>s3;
}
};
class print:public detail,public average
{
public:
void comp()
{
cout<<"total marks="<<s1+s2+s3<<endl;
cout<<"average ="<<(s1+s2+s3)/3;
}
};
main()
{
print obj;
obj.getinfo();
obj.showinfo();
obj.sub();
obj.comp();
}















