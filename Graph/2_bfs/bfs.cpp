#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// Graph class representing an undirected graph using adjacency lists
class Graph {
    int V; // Number of vertices
    vector<vector<int>> adj; // Adjacency lists

public:
    Graph(int V) {
        this->V = V;
        adj.resize(V);
    }

    // Function to add an edge between two vertices
    void addEdge(int v, int w) {
        adj[v].push_back(w);
    }

    // Function to perform BFS traversal from a given source vertex
    void BFS(int s) {
        // Mark all vertices as not visited
        vector<bool> visited(V, false);

        // Create a queue for BFS
        queue<int> q;

        // Mark the current node as visited and enqueue it
        visited[s] = true;
        q.push(s);

        while (!q.empty()) {
            // Dequeue a vertex from queue and print it
            s = q.front();
            cout << s << " ";
            q.pop();

            // Get all adjacent vertices of the dequeued vertex s
            // If an adjacent vertex has not been visited, then mark it visited
            // and enqueue it
            for (auto i = adj[s].begin(); i != adj[s].end(); ++i) {
                if (!visited[*i]) {
                    visited[*i] = true;
                    q.push(*i);
                }
            }
        }
    }
};

int main() {
    // Create a graph
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    cout << "BFS traversal starting from vertex 2: ";
    g.BFS(2);

    return 0;
}


// time complexity => o(vertices + edge)
// space complexity => o(vertices)