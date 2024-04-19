#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
    vector<vector<int>> ans;
     
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
               
                if(arr[i]+arr[j]+arr[k]==K){
                    vector<int> p;
                    p.push_back(arr[i]);
                    p.push_back(arr[j]);
                    p.push_back(arr[k]);
                    ans.push_back(p);
                    }
                    
                    }
        }
    }
   
    return ans;
}
int main(){
    int elem;
    vector<int> arr={1, 2 ,3 ,1 ,2 ,2 ,3};
    int K;
    cout<<"enter the target element : ";
    cin>>K;
    vector<vector<int>> ans=findTriplets(arr,arr.size(),K);
    
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout<<ans[i][j]<<"   ";
            
        }
        cout<<endl;
        cout<<endl;
        
        
    }
    

    

    
}