#include<bits/stdc++.h>
using namespace std;
bool sortcol(vector<float> & vec1,vector<float> & vec2)  //base address of row while be pass
{
    return vec1[3]>vec2[3];
}
int main()
{
    float n,p,weight;
    cout<<"enter the number of object"<<endl;
    cin>>n;
    vector<vector<float>> vec(n);
    for(int i=0;i<n;i++)   
    {
        vec[i].push_back(i+1);  // for identy of object(roll no.).[0]
        cin>>p;
        vec[i].push_back(p);   // for profit.[1]
        cin>>weight;
        vec[i].push_back(weight); // weight  [2]
        vec[i].push_back(p/weight);// ratio  [3]
    }
     for(vector<float> i :vec)
    {
    for(float j:i)
    cout<<j<<" ";                             // greedy approach.
    cout<<endl;
    }

    sort(vec.begin(),vec.end(),sortcol);
    for(vector<float> i :vec)
    {
    for(float j:i)
    cout<<j<<" ";
    cout<<endl;
    }
    float finalprofit=0,kanpsack=15;
    
    for(int i=0;i<n;i++)
    {
        if(kanpsack!=0)
        {  while(kanpsack!=0 && vec[i][2]!=0){
           vec[i][2]--;
    cout<<vec[i][2]<<endl;
            kanpsack=kanpsack-1;
            finalprofit+=vec[i][3];
            cout<<"*"<<kanpsack<<endl;
        }
        }
        else 
        {
            cout<<finalprofit;
        break;
        }
    }
    return 0;
    
}
