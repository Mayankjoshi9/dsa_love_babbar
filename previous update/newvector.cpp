
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<vector<int>> pairtriplet(vector<int> &arr,int n){
    vector<vector<int>> ans;
    int triplet=12;
  	for(int i=0;i<arr.size();++i){
      for(int j=i+1;j<arr.size();++j){ 
        if(i!=j){
          if(arr[i]+arr[j]+arr[j+1]==triplet){
            vector<int> temp;
            temp.push_back(arr[i]);
            temp.push_back(arr[j]);
            temp.push_back(arr[j+1]);
            sort(temp.begin(),temp.end());
            ans.push_back(temp);
            
          }
        }
      }
    }
    sort(ans.begin(),ans.end());
    return ans;
}
int main(){
    vector<int> arr={1,2,3,4,5};
    vector<vector<int>> ans=pairtriplet(arr,arr.size());
    for(int i=0;i<ans.size();++i){
        for(int j=0;j<ans[i].size();++j)
            cout<<ans[i][j]<<" ";
        cout<<endl; 
    }
    return 0;
}

