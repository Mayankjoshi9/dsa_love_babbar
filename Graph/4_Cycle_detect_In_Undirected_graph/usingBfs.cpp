#include <bits/stdc++.h>
bool isCyclicBfs(unordered_map<int,bool> &visited,
unordered_map<int,list<int>> &adj, int node){
    unordered_map<int,int> parent;
    queue<int> q;
    parent[node]=-1;
    q.push(node);
    visited[node]=1;
    
    while(!q.empty()){
        int frontNode= q.front();
        q.pop();
        for(auto i: adj[frontNode] ){
        if(visited[i] && i!= parent[frontNode]){
              return true;
          }
          else if (!visited[i]) {    
            parent[i]=frontNode;
            q.push(i);
            visited[i] = 1;
          }
          
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
            
           bool ans =isCyclicBfs(visited,adj,i);
           if(ans){
             return "Yes";
          }
        }
    }
    
        return "No";
    
    
}