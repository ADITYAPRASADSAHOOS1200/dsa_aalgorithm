#include<bits/stdc++.h>
using namespace std;
void movezeros(int arr[],int n){
 int count=0;
 for(int i=0;i<n;i++){
    if(arr[i]!=0){
        swap(arr[i],arr[count]);
        count++;
    }
   
 }
}
   void print(int arr[],int n){
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        
    }
    cout<<endl;
   }

int main(){
    int arr[6]={10,20,0,30,0,12};
     print(arr,6);
    movezeros(arr,6);
    print(arr,6);
    
}