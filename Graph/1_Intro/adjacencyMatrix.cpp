#include<bits/stdc++.h>
using namespace std;

class graph{
   public:
      vector<vector<int>> matrix;

      graph(int n){
         for(int i=0;i<n;i++){
            vector<int>temp;
            for(int j=0;j<n;j++){
                temp.push_back(0);
            }
            matrix.push_back(temp);
         }
      }

      void addEdge(int u, int v, bool direction ){
         matrix[u][v]=1;

         if(direction==0){
            matrix[v][u]=1;
         }
      }

      void printAdjMatrix(){
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix.size();j++){
                cout<<matrix[i][j]<< " ";
            }
            cout<<endl;
        }
      }



};
int main(){
  int n;
  cout<<"enter no of node : ";
  cin>>n;

  int m;
  cout<<"enter no of edges : ";
  cin>>m;

  graph g(n);
  
  for(int i=0; i<m;i++){
    cout<<i<<endl;
    int u,v;
    cin>>u>>v;
    g.addEdge(u,v,0);
  }

  g.printAdjMatrix();
}