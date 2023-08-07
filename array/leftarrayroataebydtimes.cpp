#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[],int low,int high){
   
   while(low<high){
       swap(arr[low],arr[high]);
       low++;
       high--;
   }
}

void leftrotate(int arr[],int n,int d){
while(d>n){
    d=d-n;
}
     reverse(arr,0,d-1);
     reverse(arr,d,n-1);
     reverse(arr,0,n-1);
}

int main()
{

int arr[]={1,2,3,4,5};
int n=5, d=2;
cout<<"before rotaion"<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
leftrotate(arr,n,d);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;

return 0;
}