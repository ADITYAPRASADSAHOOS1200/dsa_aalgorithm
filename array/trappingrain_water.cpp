#include<bits/stdc++.h>
using namespace std;

int trapping_rain_water(int arr[],int n){
     int res=0;
     int lmax[n], rmax[n];
      lmax[0]=arr[0];
     for(int i=1;i<n;i++){
     lmax[i]=max(arr[i],lmax[i-1]);
     }
      rmax[n-1]=arr[n-1];
     for(int i=n-2;i>=0;i++){
     rmax[i]=max(arr[i],rmax[i+1]);
}
     for(int i=1;i<n-1;i++){
      res=res+min(rmax[i],lmax[i])-arr[i];
     }
       return res;

}
int main( ){
    int arr[5]={5,0,6,2,3};
    cout<<trapping_rain_water(arr,5)<<endl;
}