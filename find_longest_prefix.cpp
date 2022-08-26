#include<bits/stdc++.h>
using namespace std;
string longestPrefix(string s[],int n)
{
if(n==0)
return "";
if(n==1)
return s[0];
sort(s,s+n);
int min_size=min(s[0].size(),s[n-1].size());
int i=0;
while(i<min_size && s[0][i]==s[n-1][i])
i++;
string pre=s[0].substr(0,i);
return pre;
}
int main()
{
    string s[]={"vineet","vikas","vivek","vshal"};
    int n=sizeof(s)/sizeof(s[0]);
    string pre=longestPrefix(s,n);
    cout<<pre;
    return 0;
}
