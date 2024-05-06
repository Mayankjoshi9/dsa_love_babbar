#include <bits/stdc++.h>

bool validPath(vector<vector<int>> &arr, vector<vector<bool>> &visited, int x, int y){
     if (x == -1 || x == arr.size() || y == -1 || y == arr.size() || visited[x][y] || arr[x][y] == 0) {
        return false;
    }

    return true;
}

void solve(vector<vector<int>> &arr, int x, int y, string path, vector<vector<bool>>& visited, vector<string > &ans){
    if (x == -1 || x == arr.size() || y == -1 || y == arr.size() || visited[x][y] || arr[x][y] == 0) {
        return;
    }
    if(x==arr.size()-1 && y==arr.size()-1){
        ans.push_back(path);
        return ;
    }
    

    visited[x][y]=1;
    // down
    if(validPath(arr,visited,x+1,y)){
        
          path+='D';
         solve(arr,x+1,y,path,visited,ans);
        
         path.pop_back();


    }
    // left

    if(validPath(arr,visited,x,y-1)){
        
          path+='L';
         solve(arr,x,y-1,path,visited,ans);
        
         path.pop_back();


    }


    // right
    if(validPath(arr,visited,x,y+1)){
          path+='R';
         solve(arr,x,y+1,path,visited,ans);
         
         path.pop_back();


    }
 
    // up
    
    if(validPath(arr,visited,x-1,y)){
        
          path+='U';
         solve(arr,x-1,y,path,visited,ans);
         
         path.pop_back();


    }

     visited[x][y]=0;
}
vector<string> searchMaze(vector<vector<int>> &arr, int n) {
  vector < string > possiblePaths;
    string path = "";

    vector < vector < bool >> visited(n, vector < bool > (n, false));

    solve(arr, 0, 0, path, visited,possiblePaths);

    return possiblePaths;
}