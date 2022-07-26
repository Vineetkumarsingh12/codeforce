#include<bits/stdc++.h>
using namespace std;
int ispossible(int arr[],int n,int k,int mid)
{
  int count=1,area=0;
  for(int i=0;i<n;i++)
  {
    if(area+arr[i]<=mid)
    {
        area+=arr[i];
    }
    else{
        count++;
        if(arr[i]>mid || count>k)
        return false;
        area=arr[i];
    }
  }
  return true;
}
int miniumtime(int arr[],int n,int k)
{
    int l=0,r=0,ans=-1;
    for(int i=0;i<n;i++)
    r+=arr[i];
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(ispossible(arr,n,k,mid))
        {
ans=mid;
r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return ans;
}
int main()
{
int arr[4]={5,5,5,5};
cout<<miniumtime(arr,4,2);
return 0;
}
