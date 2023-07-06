#include<iostream>
using namespace std;
int main(){
    int row=1;
    int n;
    cin>>n;
    while(row<=n){
        int col=1;
        while(col<=n){
            char value='A'+col-1;
            cout<<value;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
}
// ABCD
// ABCD
// ABCD
// ABCD