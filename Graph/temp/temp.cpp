#include <vector>
#include <unordered_map>
#include <list>
#include <stack>

using namespace std;

class Solution {
public:
    bool mapArray(int node, unordered_map<int, bool>& visited,
                  unordered_map<int, bool>& dfsVisited,
                  unordered_map<int, list<int>>& adj, stack<int>& st) {
        visited[node] = true;
        dfsVisited[node] = true;

        for (auto neighbour : adj[node]) {
            if (!visited[neighbour]) {
                bool cycle = mapArray(neighbour, visited, dfsVisited, adj, st);
                if (cycle) {
                    return true;
                }
            } else if (dfsVisited[neighbour]) {
                return true;
            }
        }
        
        dfsVisited[node] = false;
        st.push(node);
        return false;
    }

    vector<int> buildLine(vector<vector<int>>& Conditions, int k) {
        unordered_map<int, list<int>> adj;
        vector<int> ans;

        for (int i = 0; i < Conditions.size(); i++) {
            int u = Conditions[i][0];
            int v = Conditions[i][1];
            adj[u].push_back(v);
        }

        unordered_map<int, bool> visited;
        unordered_map<int, bool> dfsVisited;
        stack<int> st;

        for (int i = 1; i <= k; i++) {
            if (!visited[i]) {
                bool cycle = mapArray(i, visited, dfsVisited, adj, st);
                if (cycle) {
                    return {};
                }
            }
        }

        while (!st.empty()) {
            int temp = st.top();
            st.pop();
            ans.push_back(temp);
        }

        return ans;
    }

    vector<vector<int>> buildMatrix(int k, vector<vector<int>>& rowConditions, vector<vector<int>>& colConditions) {
        vector<int> row = buildLine(rowConditions, k);
        vector<int> col = buildLine(colConditions, k);

        if (row.empty() || col.empty()) {
            return {};
        }

        vector<vector<int>> ans(k, vector<int>(k, 0));

        unordered_map<int, int> rowPosition, colPosition;
        for (int i = 0; i < k; ++i) {
            rowPosition[row[i]] = i;
            colPosition[col[i]] = i;
        }

        for (int i = 1; i <= k; ++i) {
            ans[rowPosition[i]][colPosition[i]] = i;
        }

        return ans;
    }
};