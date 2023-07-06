#include<iostream>
using namespace std;
int main(){
    int i=0;
    int n;
    cin>>n;
    int sum=0;
    while(i<=n){
        if(i%2==0){
             sum+=i;
        }
       i=i+1;
       
    }
     cout<<"the sum of even no"<<sum<<endl;
}