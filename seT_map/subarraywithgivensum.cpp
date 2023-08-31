#include<bits/stdc++.h>
using namespace std;
vector<int>subarray(int arr[],int n,int sum){
    
    unordered_set<int>s;
    vector<int>v;
    int presum = 0;
    for(int i=0;i<n;i++){
        presum+=arr[i];
        if(presum == sum){
          v.push_back(arr[i]);
        }
       if(s.find(presum-sum)!=s.end()){
             v.push_back(arr[i]);
       }
            else{
             s.insert(arr[i]);
       }
            
      }
    return v;

}

int main(){

int arr[]={5,8,6,13};
int n=4;
int sum=14;

cout<<subarray(arr,n,sum)<<"";

return 0;
}