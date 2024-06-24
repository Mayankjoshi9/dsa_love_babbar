#include<bits/stdc++.h>

void dfs(int node, unordered_map<int,bool> &visited,unordered_map<int,list<int>> &adj, stack<int> &st  ){
	visited[node]=true;
	for(auto neighbour: adj[node]){
		if(!visited[neighbour]){
			dfs(neighbour, visited, adj,st);
		}
	}
	st.push(node);
}

void revDfs(int node,unordered_map<int,bool> &visited,  unordered_map<int,list<int>>& transpose){
	  visited[node]=true;
	  for(auto neighbour: transpose[node]){
		  if(!visited[neighbour]){
			  revDfs(neighbour, visited, transpose);
		  }
	  }
}
int stronglyConnectedComponents(int v, vector<vector<int>> &edges)
{
	unordered_map<int,list<int>> adj;
	for(int i=0;i<edges.size();i++){
		int u= edges[i][0];
		int v= edges[i][1];

		adj[u].push_back(v);
	}
   
    unordered_map<int,bool> visited(v);
	stack<int> st;
    
	for(int i=0;i<v;i++){	
		if(!visited[i]){
			dfs(i,visited,adj,st);
		}
	}
	
	unordered_map<int,list<int>> transpose;
	for(int i=0;i<v;i++){
		visited[i]=0;
         for(auto neighbour: adj[i]){
			 transpose[neighbour].push_back(i);
		 }
	}
   int count=0;
    while(!st.empty()){
		int top= st.top();
		st.pop();	
		if(!visited[top]){
            count++;
			revDfs(top, visited,transpose);
		}
	}
	return  count;

	
}