#include<bits/stdc++.h>
using namespace std;
  int sliding_window(int arr[],int n,int k){
     int curr=0;
     for(int i=0;i<k;i++)
        curr+=arr[i];
        int res=curr;
     for(int i=k;i<n;i++){
        curr=curr+arr[i]-arr[i-k];
         res=max(res,curr);
     }
   return res;
   }



int main()
{
int arr[6]={1,8,30,-5,20,7};int n=4;
cout<<sliding_window(arr,7,4)<<endl;
return 0;
}