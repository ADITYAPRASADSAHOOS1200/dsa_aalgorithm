#include<iostream>
using namespace std;
int main(){
int a;int b;
cout<<"enter the first number :-"<<endl;
cin>>a;
cout<<"enter the second number :-"<<endl;
cin>>b;
char op;
cout<<"enter the operation:-"<<endl;
cin>>op;
switch (op)
{
   case '+': cout<<(a+b)<<endl;
    break;
   case '*': cout<<(a*b)<<endl;
    break;
   case '%': cout<<(a%b)<<endl;
    break;
   case '/':cout<<(a/b)<<endl;
    break;
   case '_': cout<<(a-b)<<endl;
    break;
default:cout<<"invalid operation"<<endl;
    break;
}
  
}