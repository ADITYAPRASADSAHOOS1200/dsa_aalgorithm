#include<iostream>
using namespace std;
        int getlargest(int arr[],int n){

         int res=arr[0];
         for(int i=1;i<n;i++)
            if(arr[i]>res)
                res=arr[i];
          return res;
        }

    int main(){
    int arr[5]={10,20,10,40,23};
    cout<<getlargest(arr,5)<<endl;

    }