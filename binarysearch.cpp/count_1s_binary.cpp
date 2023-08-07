#include<bits/stdc++.h>
using namespace std;

int count(int arr[],int n){
   int low=0 ,high =n-1;
   while(low<=high){
    int mid=(low+high)/2;
    if(arr[mid]==0){
        low=mid+1;
    }
    else{
      if (mid == 0 || arr[mid-1]==0)
         return(n-mid);
         else
          high=mid-1;
    }
   }
  return 0;
}
int count1(int arr[],int n){
   int low=0 ,high =n-1;
   while(low<=high){
    int mid=(low+high)/2;
    if(arr[mid]==0){
        high=mid-1;
    }
    else{
      if (mid == 0 || arr[mid+1] == 0)
         return(n-mid);
         else
          low=mid+1;
    }
   }
  return 0;
}






int main()
{
    int arr[]={1,1,1,1,1,0,0,0} ,n=8;
    cout<<count1(arr,8);

return 0;
}