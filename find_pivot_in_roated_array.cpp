#include <bits/stdc++.h>
using namespace std;
int findpivot(int arr[], int n)
{
    int l = 0, r = n-1;
    while (l <= r)
    {
        int mid = (l + r) / 2;

        if (l == r)
            return l;
        if (mid < r && arr[mid] > arr[mid + 1])
            return mid;
        if (mid > l && arr[mid] < arr[mid - 1])
            return (mid - 1);
        if (arr[l] > arr[mid])
            r = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}
int main()
{
    int arr[] = {10,9,8};
    cout << findpivot(arr, 3);
}
