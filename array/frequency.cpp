#include<bits/stdc++.h>
using namespace std;

 void frequency(int arr,int n){
     int freq=1,i=1;
     while(i<n){
        while(i<n && arr[i]==arr[i-1]){
            freq++;
            i++;
        }
        cout<<arr[i-1]<<freq<<" ";
        i++;
        freq++;
     }
        if(n == 1||arr[i] == arr[i-1]){
           cout<<arr[i-1]<<freq<<" ";  
        }
     
      }



int main(){
    int arr[]={10,10,10,20,20,40};
    

}