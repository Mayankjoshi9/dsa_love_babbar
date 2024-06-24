#include <bits/stdc++.h>
using namespace std;

void dfs(int node, int parent, int &timer, vector<int> &disc,
         vector<int> &low, vector<vector<int>> &result,
         unordered_map<int, list<int>> &adj,
         unordered_map<int, bool> &visited)
{
  visited[node] = true;
  disc[node] = low[node] = timer++;

  for (auto neighbour : adj[node])
  {
    if (neighbour == parent)
    {
      continue;
    }
    if (!visited[neighbour])
    {

      dfs(neighbour, node, timer, disc, low, result, adj, visited);
      low[node] = min(low[node], low[neighbour]);

      if (disc[node] < low[neighbour])
      {
        vector<int> ans;
        ans.push_back(node);
        ans.push_back(neighbour);
        result.push_back(ans);
      }
    }
    // if visited. back edge possibility
    else if (disc[neighbour] < low[node])
    {

      low[node] = disc[neighbour];
    }
  }
}
vector<vector<int>> findBridges(vector<vector<int>> &edges, int v, int e)
{
  unordered_map<int, list<int>> adj;

  for (int i = 0; i < e; i++)
  {
    int u = edges[i][0];
    int v = edges[i][1];

    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  int timer = 0;
  vector<int> discoveryTime(v, -1);
  vector<int> EarliestTime(v, -1);
  int parent = -1;
  unordered_map<int, bool> visited;

  //  dfs

  vector<vector<int>> result;
  for (int i = 0; i < v; i++)
  {
    if (!visited[i])
    {
      dfs(i, parent, timer, discoveryTime, EarliestTime, result, adj, visited);
    }
  }
  return result;
}