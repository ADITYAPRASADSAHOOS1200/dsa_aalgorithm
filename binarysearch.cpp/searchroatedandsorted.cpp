#include <bits/stdc++.h>
using namespace std;

int sorted(int arr[], int n, int x)
{
    int low = 0, high = n - 1;

    while (low <= high)
    {

        int mid = (low + high) / 2;

        if(arr[mid]==x)
        return mid;

         if (arr[low] <= arr[mid])
        {
            if (arr[low] <= x && arr[mid] > x)
                high = mid - 1;
            else
                low = mid + 1;
        }
        else
        {
            if (arr[high] >= x && arr[mid] < x)
                low = mid + 1;
            else
                high = mid - 1;
        }
    }
    return 0;
}

int main()
{

    int arr[] = {10, 20, 30, 40, 50, 8, 9}, n = 7;
    int x = 30;
    cout << sorted(arr, n, x);
    return 0;
}