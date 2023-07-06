#include<iostream>
using namespace std;
int main(){
   int i=1;
   int n;
   cin>>n;
     
   while (i<=n){
    int j=1;
   int  count=i;
    while(j<=n){
        cout<<count<<" ";
        count=count+1;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
   }
   

}
// 1
// 2 3
// 3 4 5
// 4 5 6 7