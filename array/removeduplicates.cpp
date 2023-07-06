#include<iostream>
using namespace std;
int removeduplicates(int arr[],int n){
      int res=1; 
      for(int i=1;i<n;i++){
          if(arr[i]!=arr[res-1]){
              arr[res]=arr[i];
              res++;
          }
      }
          return res;
}
int main(){
     int arr[6]={10,20,20,30,30,30};
    
    int n=6;
    n=removeduplicates(arr,6);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}