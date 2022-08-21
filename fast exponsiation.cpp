#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=2,n=5;
    int res=1;
    while(n>0)
    {
        if(n&1)
        {
            res=res*a;
        }
        a=a*a;
        n=n>>1;
    }
    cout<<res;
}
