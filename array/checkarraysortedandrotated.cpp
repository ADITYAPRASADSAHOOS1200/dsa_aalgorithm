#include<bits/stdc++.h>
using namespace std;

bool checksortedandrotated(int arr[],int n){
    for(int i=1;i<n;i++){
      if(arr[i-1]>arr[i] || arr[i-1]<arr[i])
          return true;
    }
    return false;
}
int main()
{
int arr[4] = {3,4,1,2};
cout<<checksortedandrotated(arr, 4)<<endl;
return 0;
}