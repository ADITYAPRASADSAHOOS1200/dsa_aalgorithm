#include<bits/stdc++.h>
using namespace std;
 int searchInSorted(int arr[], int n, int x) 
    { 
        int low=0;
        int high=n-1;
       	while(low <= high)
	{
		int mid = (low + high) / 2;

		if(arr[mid] == x)
			return arr[mid];

		else if(arr[mid] > x)
			high = mid - 1;

		else
			low = mid + 1;
	}
    return -1;
    }




int main()
{
    int arr[5]={1,2,3,4,6};
    int x=6;
    cout<<searchInSorted(arr,5,6)<<endl;
    
return 0;
}