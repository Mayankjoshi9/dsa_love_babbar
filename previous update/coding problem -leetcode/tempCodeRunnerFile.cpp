#include<bits/stdc++.h>
using namespace std;
vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int>ans(nums.size(),0);
        for(int i=0;i<nums.size();i++){
             if(i<=index[i]){
                 ans[index[i]]=nums[i];
                 cout<<"index : "<<ans[index[i]]<<" " << index[i]<<endl;
             }