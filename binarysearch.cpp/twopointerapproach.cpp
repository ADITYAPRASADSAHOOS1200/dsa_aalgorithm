#include<bits/stdc++.h>
using namespace std;
bool twopointer(int arr[],int n,int x){ 
 int i=0 , j=n-1; 
 while(i<j){
    if(arr[i]+arr[j] == x)
         return true;
       else if(arr[i]+arr[j]<x)
       i++;
       else
       j--;

 }
 return false;
}

int main()
{

    int arr[5]={2,5,8,12,30};
    int x=17;
    cout<<twopointer(arr,5,x);
return 0;
}