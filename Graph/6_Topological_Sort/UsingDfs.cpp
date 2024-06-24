#include <bits/stdc++.h> 
using namespace std;

void topoSort(int node, vector<bool> &visited, unordered_map<int, list<int>> &adj, stack<int> &st) {
    visited[node] = true;
    for (auto neighbour : adj[node]) {
        if (!visited[neighbour]) {
            topoSort(neighbour, visited, adj, st);
        }
    }
    st.push(node);
}

vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e) {
    unordered_map<int, list<int>> adj;
    for (int i = 0; i < e; i++) {
        int u = edges[i][0];
        int v = edges[i][1];
        adj[u].push_back(v);
    }

    vector<bool> visited(v, false);
    stack<int> st;

    for (auto pair: adj) {
        int i= pair.first;
        if (!visited[i]) {
            topoSort(i, visited, adj, st);
        }
    }

    vector<int> ans;
    while (!st.empty()) {
        int temp = st.top();
        st.pop();
        ans.push_back(temp);
    }
    return ans;
}

int main() {
    int v = 8;  // Number of vertices
    int e = 9;  // Number of edges

    vector<vector<int>> edges = {
        {5, 11},
        {7, 11},
        {7, 8},
        {3, 8},
        {3, 10},
        {11, 2},
        {11, 9},
        {11, 10},
        {8, 9}
    };

    vector<int> result = topologicalSort(edges, v, e);

    cout << "Topological Sort of the given graph:" << endl;
    for (int node : result) {
        cout << node << " ";
    }

    return 0;
}
