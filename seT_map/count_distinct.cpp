#include<bits/stdc++.h>
using namespace std;

int countdistinct(int arr[],int n){
    int count=0;
   for(int i=1;i<n;i++){
    bool flag=false;
    for(int j=0;j<i;j++){
         if(arr[i] == arr[j])
         flag=true;
         break;
    }
    if(flag == false)
        count++;
   }
   return count;

}
int main(){

int arr[5]={10,20,10,20,30};
cout<< countdistinct(arr, 5)<<" ";
return 0;
}