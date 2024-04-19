#include <bits/stdc++.h>
using namespace std;
vector<int> spiralOrder(vector<vector<int>> matrix)
{
    vector<int>ans;
    int row = matrix.size()-1;
    int col = matrix[0].size()-1;
    int r=0,c=0;
    int n=1;
    ans.push_back(matrix[0][0]);
    while (row >= 0 && col>= 0)
    {
        if (n % 4 == 1 )
        {
           for(int i=0;i<col;i++){
              ans.push_back(matrix[r][++c]);
              
           }
           if(n!=1){
               col--;
           }
           
        }
        else if (n % 4 == 2)
        {
            for (int j = 0; j <row ; j++)
            {
                  ans.push_back(matrix[++r][c]);
                  
            }
            row--;
            
        }
        else if (n % 4 == 3)
        {
           for (int i = 0; i < col; i++)
           { 
              ans.push_back(matrix[r][--c]);
           }
           col--;
        }
        else if (n % 4 == 0)
        {
            for (int i = 0; i < row; i++)
            {
                ans.push_back(matrix[--r][c]);
            }
            row--;
            
        }
        n++;
    }
    return ans;
    }
int main()
{
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<int >ans=spiralOrder(matrix);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}