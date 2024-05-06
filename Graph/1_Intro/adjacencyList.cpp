#include<bits/stdc++.h>
using namespace std;
template <typename T>
class graph{
   public:
        unordered_map<T,list<T>> adj;

        void addEdge(T u, T v, bool direction){
            //  direction =0 -> undirected graph
            // direction =1 -> directed graph

            // create an edge from u to v
            adj[u].push_back(v);

            if(direction==0){
                adj[v].push_back(u);
            }
        }

        void printAdjList(){
            for(auto i : adj){
                cout<<i.first<<"-> ";
                for(auto j: i.second){
                   cout<<j<<", ";
                }
                cout<<endl;
            }
        }
};


// vector < vector < int >> printAdjacency(int n, int m, vector < vector < int >> & edges) {
//      vector<int> ans[n];

//      for(int i=0; i<m;i++){
//         int u= edges[i][0];
//         int v=edges[i][1];
//         ans[v].push_back(u);
//         ans[u].push_back(v);

//      }

//      vector<vector<int>> adj(n);
//      for(int i=0; i<n; i++){
//          adj[i].push_back(i);

//          for(int j=0; j<ans[i].size();j++){
//              adj[i].push_back(ans[i][j]);
//          }
//      }
//      return adj;
// }
int main(){
   int n;
   cout<<"Enter no of nodes : ";
   cin>> n;

   int m;
   cout<<"Enter no of edge : ";
   cin>>m;
    
    graph<int> g;
   for(int i=0; i<m ; i++){
    int u, v;
    cin>>u>>v;
    // create an undirected graph
    g.addEdge(u,v,0);
   }

//    printing graph
   g.printAdjList();
}