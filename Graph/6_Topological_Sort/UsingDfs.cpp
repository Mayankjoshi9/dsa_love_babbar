// directed acyclic graph
#include <bits/stdc++.h> 

void topoSort(int node, vector<bool> &visited, unordered_map<int,list<int>> &adj, stack<int> &st){
       visited[node]=1;
        for(auto neighbour : adj[node]){
                if(!visited[neighbour]){
                    topoSort(neighbour, visited, adj, st);

                }
        }
        st.push(node);

}
vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
     unordered_map<int,list<int>> adj;
     for(int i=0;i<e;i++){
         int u=edges[i][0];
         int v=edges[i][1];
         adj[u].push_back(v);
     }
     
     vector<bool> visited(v);
     stack<int> st;
     for(int i=0;i<v;i++){
         if(!visited[i]){
             topoSort(i,visited,adj,st);
         }
     }
     vector<int> ans;
     while(!st.empty()){
         int temp=st.top();
         st.pop();
         ans.push_back(temp);
     }
     return ans;
}