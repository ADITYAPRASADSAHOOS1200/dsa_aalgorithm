#include<iostream>
using namespace std;
int main(){
    int i=1;
    int n;
    cin>>n;
    while(i<=n){
        int j=1;
    while(j<=i){
        cout<<j<<" ";
        j=j+1;
    }
    cout<<endl;
    i=i+1;
    }

}
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5