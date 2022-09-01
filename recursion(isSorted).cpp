#include<bits/stdc++.h>
using namespace std;
bool isSorted(int arr[],int size)
{
    if(size==0||size==1)
    return 1;
    if(arr[0]>arr[1])
    return 0;
    isSorted(arr+1,size-1);

}
int main()
{
    int arr[]={1,2,1,4,5};
cout<<(isSorted(arr,5)?"yes":"false");
return 0;
}
