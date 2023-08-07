#include<bits/stdc++.h>
using namespace std;
int bsearch(int arr[],int n,int x){
  int low=0,high=n-1;
  while(low<=high){
    int mid=low+high/2;
    if(arr[mid]>x)
        high=mid-1;
  
    else if(arr[mid]<x)
        low=mid+1;
    else
    if(mid == 0 || arr[mid-1]!=arr[mid])
         return mid;
    else
        high=mid-1;
    
  }
  return -1;

}
int main(){
   int arr[] = {10, 20, 20, 20, 40, 40,20}, n = 7;

   int x = 20;
    cout<<bsearch(arr,7,20);
}