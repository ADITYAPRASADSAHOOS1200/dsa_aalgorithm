#include<bits/stdc++.h>
using namespace std;

int Peak(int arr[], int n){
	int low = 0, high = n - 1;

		while(low <= high)
		{
			int mid = (low + high) / 2;

			if((mid == 0 || arr[mid - 1] <= arr[mid]) &&
				(mid == n - 1 || arr[mid + 1] <= arr[mid]))
				return mid;
			if(mid > 0 && arr[mid - 1] >= arr[mid])
				high = mid -1;
			else
				low = mid + 1;
		}
	return -1;
}


int main()
{
    int arr[5]={3,4,5,1,2}; 
     
     cout<< Peak(arr,5);
    
return 0;
}
// int Peak(int arr[], int n)
// {
// 	int low = 0, high = n - 1;

// 		while(low <= high)
// 		{
// 			int mid = (low + high) / 2;

// 			if((mid == 0 || arr[mid - 1] <= arr[mid]) &&
// 				(mid == n - 1 || arr[mid + 1] <= arr[mid]))
// 				return mid;
// 			if(mid > 0 && arr[mid - 1] >= arr[mid])
// 				high = mid -1;
// 			else
// 				low = mid + 1;
// 		}
// 	return -1;
// }