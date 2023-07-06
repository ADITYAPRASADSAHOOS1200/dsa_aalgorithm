#include<iostream>
using namespace std;
int main(){
    int i=1;
    int n;
    cin>>n;
    while(i<n){
        i=i+1;
        if(n % 2 != 0){
           cout<<" number is  prime"<<endl;
        }else{
            cout<<"is  prime  not number"<<endl;
        }
    }
}