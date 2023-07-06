#include<iostream>
using namespace std;
int main(){                          //1111
    int i=1;                         //2222
    int n;                           //3333
    cin>>n;                          //4444
    while(i<=n){
        int j=1;
        while(j<=n){
           cout<<i;
           j=j+1;  
        }
        cout<<endl;
        i=i+1;
    }
}