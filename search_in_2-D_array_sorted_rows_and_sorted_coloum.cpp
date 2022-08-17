#include<bits/stdc++.h>
using namespace std;
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       int row=matrix.size();
        int coloum=matrix[0].size()-1;
        
        int rowindex=0;
        int coloumindex=coloum;
        // if target element is greater than left currentcoloum
        // then move next row
        // if target element is less than decreass the coloum
        // repeat this process until rowindex is less  than row and //c
        //coloumindex is less than or equal to zero.
        while(rowindex<row  && coloumindex>=0)
        {
            int element=matrix[rowindex][coloumindex];
            if(element==target)
                return 1;
            if(target>element)
                rowindex++;
            else if(target<element)
                coloumindex--;
        }
        return 0;
        
    }
int main()
{
vector<vector<int>> matrix={{-5}};
int target=-10;
bool ans=searchMatrix(matrix,target);
cout<<ans;
return 0; 
}
