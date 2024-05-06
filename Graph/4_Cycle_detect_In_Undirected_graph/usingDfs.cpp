#include <bits/stdc++.h>
bool isCyclicDfs(unordered_map<int,bool> &visited,
unordered_map<int,list<int>> &adj, int node,int parentNode ){
    
    
    visited[node]=1;
    
    for(auto neighbour : adj[node]){
      if (!visited[neighbour]) {
        bool cycleDetected = isCyclicDfs(visited, adj, neighbour,node );
        if(cycleDetected){
            return true;
        }
      }
      else if(visited[neighbour] && neighbour!= parentNode){
          return true;
      }
    }
    return false;

}
string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
    unordered_map<int,list<int>> adj;
    for(int i=0;i<m;i++){
        int u= edges[i][0];
        int v=edges[i][1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    unordered_map<int,bool> visited;
   
    for(int i=0;i<n;i++){
        if(!visited[i]){
            
           bool ans =isCyclicDfs(visited, adj,i,-1);
           if(ans){
             return "Yes";
          }
        }
    }
    
        return "No";
    
    
}