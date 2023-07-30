#include<bits/stdc++.h>
using namespace std;

int majority(int arr[],int n){
int res=0,count=1;
for(int i=1;i<n;i++){
if(arr[res]==arr[i])
    count++;
  else
     count--;
 if(count == 0){
    res=i;
    count=1;
 }
}
count=0;
for(int i=0;i<n;i++)
if(arr[res]==arr[i])
    count++;

 return (count>n/2) ? arr[res]:-1;

}


int main()
{
int arr[5]={10,20,20,20,60};
cout<<majority(arr,5)<<endl;
return 0;
}