#include<iostream>
using namespace std;
int deleteion(int arr[],int n,int x){
     int i;
   for( i=0;i<n;i++)
      if(arr[i] == x)
        break;
      if(i == n)
      return n;
      for(int j=i;j<n-1;j++)
      arr[j]=arr[j+1];
      return(n-1);

}
int main()
{
    int arr[5]={10,20,12,5,6};
    int n=5;
    int x=12;  
    n=deleteion(arr,5,12);
    for( int i=0;i<n;i++)
    cout<<arr[i]<<" ";
} 

