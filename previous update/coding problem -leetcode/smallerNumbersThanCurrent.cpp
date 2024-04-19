#include<bits/stdc++.h>
using namespace std;
vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> s;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            s.push_back(nums[i]);
        }
        sort(s.begin(),s.end());
        map<int,int>m;
        for(auto i=0;i!=n;i++)
        {
            if(m.find(s[i])==m.end())
                m[s[i]]=i;
        }
        
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            v.push_back(m[nums[i]]);
        }
        return v;
    }

int main(){
    vector<int>nums={8,1,2,2,3};
    vector<int> ans(smallerNumbersThanCurrent(nums));
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<< " ";
    }
    

}