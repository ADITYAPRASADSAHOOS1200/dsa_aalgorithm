#include<iostream>
using namespace std;
int main(){
    int i=1;
    int n;
    cin>>n;
    while(i<=n){
        int j=1;
        char value='A'+i-1;
        while(j<=i){
            cout<<value;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
// A
// BB
// CCC
// DDDD