#include<iostream>
using namespace std;
int main(){
    char  ch;
    cout<<"enter the charctera"<<endl;
    cin>>ch;
    if(ch>=97 && ch<=122){
        cout<<"lowercase"<<" "<<ch<<endl;
    }
    else if(ch>=65 && ch<=90 ){
        cout<<"uppercase"<<" "<<ch<<endl;
    }
    else if(ch>=48 && ch<=57){
        cout<<"numbers"<<" "<<ch<<endl;
    }
    else{
        cout<<"special character"<<endl;
    }
}