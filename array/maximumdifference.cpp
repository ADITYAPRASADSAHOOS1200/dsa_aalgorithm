 #include<bits/stdc++.h>
 using namespace std;

//naive solution

int maximumdifference(int arr[],int n){
    int res=arr[1]-arr[0];
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            res=max(res,arr[j]-arr[i]);
        }
        
    }

return res;

}
//simple approach
int max2difference(int arr[],int n){
    int res=arr[1]-arr[0];
    int minval=arr[0];
    for(int j=1;j<n;j++){
        res=max(res,arr[j]-arr[0]);
        minval=min(minval,arr[j]);
    }

    return res;
   
}
int main(){
   int arr[]={2,3,10,6,4,8,1};
   int n=7;
   cout<<maximumdifference(arr,7)<<" ";
   cout<<max2difference(arr,7)<<" ";
   }
