#include<bits/stdc++.h>
using namespace std;
int even_and_odd(int arr[],int n){
   int res=1;
   int curr=1;
   for(int i=0;i<n;i++){
   if (arr[i] % 2 != arr[i-1] % 2){
        curr++;
        res=max(res,curr);
    }
    else
       curr=1;
   }
   return res;
}
int main(){
    int arr[6]={5,10,20,6,3,8};
    int n=6;
    cout<<even_and_odd(arr,6)<<endl;
}