

#include <bits/stdc++.h>
using namespace std;

// Function to return the maximum
// water that can be stored
int maxWater(int arr[], int n)
{
	int res=0;
     int lmax[n],rmax[n];
     for(int i=1;i<n-1;i++){
         lmax[0]=arr[0];
         for(int i=1;i<n;i++)
           lmax[0]=max(arr[i],lmax[i-1]);

        rmax[n-1]=arr[n-1];
        for(i=n-2;i>=0;i--)
        rmax[n-1]=max(arr[i],rmax[i+1]);

        res=res+min(lmax[i],rmax[i]);

     }
     return res;
}

int main()
{
	 int arr[] = {3,0,2,0,4};
	int n = sizeof(arr) / sizeof(arr[0]);

	cout << maxWater(arr, n);

	return 0;
}

