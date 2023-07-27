#include<bits/stdc++.h>
using namespace std;

void print(int arr[],int n){
 for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;


}





int maxsum(int arr[],int n){
  int res=arr[0];
  int maxend=arr[0];
  for(int i=1;i<n;i++){
    maxend=max(maxend+arr[i],arr[i]);
    res=max(res,maxend);
  }
  return res;
}



int main(){
    int arr[6]={-3,8,-2,4,-5,6};
  //  cout<<maxsum(arr,6)<<endl;

}