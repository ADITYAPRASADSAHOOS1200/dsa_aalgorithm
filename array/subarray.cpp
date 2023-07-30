#include<bits/stdc++.h>
using namespace std;

int subarray(int arr[],int n,int sum){
    int curr=0;int s=0;
    for(int i=0;i<n;i++){
        curr+arr[i];
        while(sum<curr){
            curr=-arr[s];
            s++;
        }
        if(curr==sum){
            return true;
        }
    }
    return false;
}


int main()
{
    int arr[4]={4,8,12,5};
    int sum=17;
    cout<<subarray(arr,6,33)<<endl;
return 0;
}