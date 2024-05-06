#include <bits/stdc++.h> 
using namespace std;
#include <bits/stdc++.h> 

bool safe(int row, int col, vector<vector<int>> &board){
    for(int i=col;i>=0;i--){
      if (board[row][i] == 1) {
        return false;
      }
    }

    for (int i = row , j = col ; i >= 0 && j >= 0; i--, j--){
        if(board[i][j]==1){
            return false;
        }
    }

    for(int i=row, j=col; i<board.size() && j>=0;i++, j--){
         if(board[i][j]==1){
             return false;
         }
    }
    return true;

}

void solve( vector<vector<int>> &board, int col,  vector<vector<int>> &ans, int size ){
    if(col==size){
        vector<int> temp;
        for(int i=0;i<size;i++){
            for(int j=0;j<size;j++){
                temp.push_back(board[i][j]);
            }
            
        }
        ans.push_back(temp);
        return;
    }

    for(int row=0;row<size;row++){
         if(safe(row,col,board)){
             board[row][col]=1;
             solve(board,col+1,ans, size);
             board[row][col]=0;
         }
    }
}
vector<vector<int>> nQueens(int n)
{
	vector<vector<int>> ans;      
    vector<vector<int>> board(n,vector<int>(n,0));
    int col=0;

    solve(board, col, ans, n);
    return ans;


	
}

int main(){
    int n=4;
    vector<vector<int>> ans=nQueens(n);
    for(auto i:ans){
        for (auto j:i)
		{
			cout<<j<<" ";
		}
		cout<<endl;
    }
	
}