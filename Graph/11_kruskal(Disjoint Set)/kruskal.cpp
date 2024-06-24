#include <bits/stdc++.h>


// Time Complexity: O(E * logE) or O(E * logV) 

// Sorting of edges takes O(E * logE) time. 
// After sorting, we iterate through all edges and apply the find-union algorithm. The find and union operations can take at most O(logV) time.
// So overall complexity is O(E * logE + E * logV) time. 
// The value of E can be at most O(V2), so O(logV) and O(logE) are the same. Therefore, the overall time complexity is O(E * logE) or O(E*logV)
// Auxiliary Space: O(V + E), where V is the number of vertices and E is the number of edges in the graph.
bool cmp(const vector<int> &a, const vector<int> &b){
  return a[2]< b[2];
}

void makeSet(vector<int> &parent, vector<int> &rank, int n){
  for(int i=0;i<n;i++){
    parent[i]=i;
    rank[i]=0;
  }
}

int findParent(vector<int> &parent, int node){
  if(parent[node]==node){
    return node;
  }

  return parent[node] =findParent(parent, parent[node]);
}

void unionSet(int u, int v, vector<int> &parent, vector<int> &rank){
       if(rank[u]<rank[v]){
         parent[u]=v;
       }
       else if(rank[v]<rank[u]){
         parent[v]=u;
       } else {
         parent[u] = v;
         rank[v]++;
       }
}

int minimumSpanningTree(vector<vector<int>> &edges, int n) {
  sort(edges.begin(), edges.end(), cmp);

  vector<int> parent(n);
  vector<int> rank(n);
  makeSet(parent, rank, n);

  int minWeight = 0;

  for (int i = 0; i < edges.size(); i++){
    int u= findParent(parent, edges[i][0]);
    int v= findParent(parent, edges[i][1]);
    int wt= edges[i][2];

    if(u!=v){
      minWeight+= wt;
      unionSet(u, v, parent, rank);
    }
  }
  return minWeight;

}