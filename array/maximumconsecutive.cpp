#include<bits/stdc++.h>
using namespace std;
int maximumconsecutive(int arr[],int n){
   int res=0,i,curr;
  
   for( i=0;i<n;i++){
    if(arr[i]==0){
       curr=0;
    }
    else{
        curr++;
        res=max(res,curr);
    }

   }
return res;

}
int main(){
    int arr[8]={0,1,1,1,0,0,1,0};
    cout<<maximumconsecutive(arr,8)<<endl;
    return 0;
}