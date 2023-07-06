#include<iostream>
using namespace std;

int firstoccurence(int arr[],int n,int key){
 int s=0;
 int e=n-1;
 int mid=s+(e-s)/2;
 int ans=-1;
 while(s<=e){
    if(arr[mid]==key){
        ans=mid;
        e=mid-1;
    }
     else if(key>arr[mid]){
         s=mid+1;
     }
     else if(key<arr[mid]){
         e=mid-1;
     }    
     mid=(s+e)/2;
    }
  return ans;
 }

 int lastoccurence(int arr[],int n,int key){
 int s=0;
 int e=n-1;
 int mid=s+(e-s)/2;
 int ans=-1;
 while(s<=e){
    if(arr[mid]==key){
        ans=mid;
        s=mid+1;
    }
     else if(key>arr[mid]){
         s=mid+1;
     }
     else if(key<arr[mid]){
         e=mid-1;
     } 
       mid=s+(e-s)/2;   
    }
  return ans;
 }


int main(){
int arr[6]={5,7,7,8,8,10};
int key=8;

cout<<"first occurence ->"<<firstoccurence(arr,8,key)<<endl;
cout<<"last occurence ->"<<lastoccurence(arr,8,key)<<endl;

return 0;
}