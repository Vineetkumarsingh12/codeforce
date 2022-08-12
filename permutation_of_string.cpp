#include <bits/stdc++.h>
using namespace std;
bool check(int s1_count[],int s2_count[])
{for(int i=0;i<26;i++)
    if(s1_count[i]!=s2_count[i])
    return false;
    return true;
}
int main()
{
    string s2="gksrtrrktrtr";
    string s1="sfe";
    int count_s1[26]={0};
    for(int i=0;i<s1.length();i++)
    {
        int index=s1[i]-'a';
        count_s1[index]++;

    }
    int i=0;
    int count_s2[26]={0};
    while(i<s1.length() && i<s2.length())
    {
   int index=s2[i]-'a';
   count_s2[index]++;
   i++;
    }
    if(check(count_s1,count_s2))
    return 1;
    while(i<s2.length())
    {
        int index=s2[i]-'a';
        count_s2[index]++;
        count_s2[s2[i-s1.length()]-'a']--;
        i++;
        if(check(count_s1,count_s2))
        return 1;
    }
    cout<<"false";
    return 0;

}
