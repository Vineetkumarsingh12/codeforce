#include<bits/stdc++.h>
using namespace std;
int sum(int arr[],int size)
{
    if(size==0)
    return 0;
    
    return arr[0]+sum(arr+1,size-1);;
}
int main()
{
int arr[]={1,2,3,4,5};
cout<<sum(arr,5);
return 0;
}
