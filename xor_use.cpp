#include<bits/stdc++.h>
using namespace std;
int Unique(int *arr, int size)
{
 int uni=0;
    for(int i=0;i<size;i++)
    {
        uni^=arr[i];
    }
    return uni;
}
int main()
{
    int arr[5]={1,2,3,2,3};
cout<<Unique(arr,5);
return 0;
}
