#include <bits/stdc++.h>


// Time Complexity: O(E*log(E)) where E is the number of edges
// Auxiliary Space: O(V^2) where V is the number of vertex

struct cmp {
    bool operator() (const pair<int,int>& a, const pair<int,int>& b)  {
        return a.second > b.second; 
    }
};

  // bool compare(pair<int,int> & a, pair<int,int>& b){
  //        return a.second>b.second;
  // }

void MST(unordered_map<int, list<pair<int, int>>> &adj, vector<int> &key,
         vector<bool> &mst, vector<int> &parent, int n) {
  key[1] = 0;
  parent[1] = -1;
  priority_queue<pair<int,int>, vector<pair<int,int>>,cmp> pq;
  // priority_queue<pair<int,int>, vector<pair<int,int>>, decltype(compare)> pq(compare);
  pq.push({1, key[1]});
  while (!pq.empty()) {
    pair<int,int> Node = pq.top();
    int frontNode=Node.first;
    pq.pop();
    mst[frontNode] = true;

    for (auto neighbour : adj[frontNode]) {
      int v = neighbour.first;
      int w = neighbour.second;

      if (mst[v] == false && (w < key[v])) {
        parent[v] = frontNode;
        key[v] = w;
        pq.push(make_pair(v, key[v]));
      }
    }
  }
}
vector<pair<pair<int, int>, int>>
calculatePrimsMST(int n, int m, vector<pair<pair<int, int>, int>> &g) {
  unordered_map<int, list<pair<int, int>>> adj;
  for (int i = 0; i < m; i++) {
    int u = g[i].first.first;
    int v = g[i].first.second;
    int w = g[i].second;

    adj[u].push_back(make_pair(v, w));
    adj[v].push_back(make_pair(u, w));
  }

  vector<int> key(n + 1, INT_MAX);
  vector<bool> mst(n + 1, false);
  vector<int> parent(n + 1, -1);

  MST(adj, key, mst, parent, n);

  vector<pair<pair<int, int>, int>> ans;
  for (int i = 2; i <= n; i++) {
    ans.push_back({{parent[i], i}, key[i]});
  }
  return ans;
}
