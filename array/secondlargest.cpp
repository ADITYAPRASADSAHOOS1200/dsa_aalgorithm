#include<iostream>
using namespace std;

int secondlargest(int arr[],int n){
    int res=-1, max=0;
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            res=max;
            max=arr[i];
        }
      else if(arr[i] != max){
            if(res == -1 ||  arr[i]>res)
                res=arr[i];
        }
    }
 return res;
        
}
    

int main(){
   int arr[5]={5,20,12,20,10};
   cout<<secondlargest(arr,5)<<" ";
}