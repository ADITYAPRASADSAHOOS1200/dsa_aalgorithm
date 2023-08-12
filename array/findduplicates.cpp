#include<bits/stdc++.h>
using namespace std;
void findduplicates(int arr[],int n){
         int ans;
        sort(arr,arr+n);
        for(int i=1;i<n;i++){
            if(arr[i]==arr[i-1]){
                ans=arr[i];
                break;
            }
        }
        
    }
int main()
{
    int arr[6]={10,20,30,40,30,20};
    findduplicates(arr,6);
   
    
return 0;
}