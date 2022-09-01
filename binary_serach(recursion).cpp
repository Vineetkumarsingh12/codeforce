#include<bits/stdc++.h>
using namespace std;
bool binarySearch(int arr[],int right,int target,int left=0)
{
    if(left>right)
    return 0;
    int mid=(left+right)/2;
    if(arr[mid]==target)
    return true;
    else if(arr[mid]>target)
    binarySearch(arr,mid-1,target,left);
    else if(arr[mid]<target)
    binarySearch(arr,right,target,mid+1);
}
int main()
{
    int arr[]={1,2,3,4,6,8,10};
    cout<<binarySearch(arr,7,9);
return 0;
}
