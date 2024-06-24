
// for -ve edge

// Time Complexity when graph is connected:
// Best Case: O(E), when distance array after 1st and 2nd relaxation are same , we can simply stop further processing
// Average Case: O(V*E)
// Worst Case: O(V*E)
// Time Complexity when graph is disconnected:
// All the cases: O(E*(V^2))
// Auxiliary Space: O(V), where V is the number of vertices in the graph.
int bellmonFord(int n, int m, int src, int dest, vector<vector<int>> &edges) {
      vector<int> dist(n+1,1e8);
      dist[src]=0;

    //   n-1 times

    for(int i=1; i<=n-1;i++){
        // traverse on edge list
        for(int j=0; j<m; j++){
            int u= edges[j][0];
            int v= edges[j][1];
            int wt= edges[j][2];

            if( dist[u]!=1e8 && (dist[u]+wt< dist[v])){
                dist[v]= dist[u]+wt;
            }
        }
    }

   // check for -ve cycle
    bool flag=0;
    for(int j=0;j<m;j++){
       int u= edges[j][0];
            int v= edges[j][1];
            int wt= edges[j][2];

            if(dist[u]!=1e8 && (dist[u]+wt< dist[v])){
                flag=1;
            }
    }

    if(flag==0){
        return dist[dest];
    }

    return -1;
}