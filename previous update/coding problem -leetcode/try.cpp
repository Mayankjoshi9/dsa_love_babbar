#include<bits/stdc++.h>
using namespace std;
vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int>ans(nums.size(),0);
        for(int i=0;i<nums.size();i++){
             if(i<=index[i]){
                 ans[index[i]]=nums[i];
                
             }
            else{
                for(int j=ans.size()-1;j>index[i];j--){
                    ans[j]=ans[j-1];
                    
                }
                ans[index[i]]=nums[i];
                cout<<"index 1 : "<<ans[index[i]]<<" " << index[i]<<endl;
            }
            cout<<"element are : ";
            for(int i=0;i<ans.size();i++){
                cout<<ans[i]<< "  ";
            }
            cout<<endl;
        }
        
        return ans;
    }
int main(){
    vector<int>nums{0,1,2,3,4};
    vector<int>index{0,1,2,2,1};
    vector<int> ans(createTargetArray(nums,index));
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    
}