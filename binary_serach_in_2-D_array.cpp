#include<bits/stdc++.h>
using namespace std;
  bool searchMatrix(vector<vector<int>>matrix, int target) {
        int row=matrix.size();
        int coloum=matrix[0].size();
        int left=0;
        int right=row*coloum-1;
        while(left<=right)
        {
            int mid=(left+right)/2;
            int element=matrix[mid/coloum][mid%coloum];
            if(element==target)
                return 1;
            else if(target<element)
                right=mid-1;
       else if(target>element)
           left=mid+1;
        }
        return 0;
    }
int main()
{
    vector<vector<int>> matrix={{1,2,3},{4,5,6},{7,8,9}};
    int target =4;
    bool ans=searchMatrix(matrix, target);
    cout<<(ans?"found":"Not found");
    return 0;
}
