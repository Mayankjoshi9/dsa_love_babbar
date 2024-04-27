#include <bits/stdc++.h> 
vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
{
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i=0;i<kArrays.size();i++){
        for(int j=0;j<kArrays[i].size();j++){
                 pq.push(kArrays[i][j]);
        }
    }
    vector<int>ans;
    int size=pq.size();
    for(int i=0;i<size;i++){
        int top=pq.top();
        pq.pop();
        ans.push_back(top);

    }
    return ans;
}
