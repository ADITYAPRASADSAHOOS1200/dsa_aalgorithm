#include<iostream>
using namespace std;
int main(){
    int a=4;
    int b=6;                                              
    cout<<"a&b = "<<" "<<(a&b)<<endl;
    cout<<"a|b = "<<" "<<(a|b)<<endl;
    cout<<"~a = "<<" "<<(~a)<<endl;  
    cout<<"a^b = "<<" "<<(a^b)<<endl;
    //right shift operator
    cout<<(17>>1)<<endl;    //17/2^1=17/2=8
    cout<<(17>>3)<<endl;    //17/2^3=17/8=2
    //left shift operator
    cout<<(17<<1)<<endl;    //19/2^1=19*2=38
    cout<<(21<<3)<<endl;    //21/2^3=21*8=168


   cout<<(a++)<<endl;
   cout<<(a--)<<endl;

   cout<<(++b)<<endl;
   cout<<(--b)<<endl;
}