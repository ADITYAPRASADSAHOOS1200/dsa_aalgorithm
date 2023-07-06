#include<iostream>
using namespace std;
 int insert(int arr[],int n,int x,int cap,int pos){
     if(n == cap)
     return n;
   int idx=pos-1;
 for(int i=n-1;i>=idx;i--)
       arr[i+1]=arr[i];
       arr[idx]=x;
        return n+1;
   
 }

int main(){
   int arr[5], cap=5,n=4;
   arr[0]=5;
   arr[1]=10;
   arr[2]=20;
   arr[3]=30;
   cout<<"before insertion"<<endl;
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }
   cout<<endl;
   int x=7, pos=5;
   n=insert(arr,4,7,5,5);
   cout<<"after insertion:"<<endl;
   for(int i=0;i<n;i++)
   cout<<arr[i]<<" ";
}
