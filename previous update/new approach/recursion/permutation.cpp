#include <bits/stdc++.h>
using namespace std;
int print(vector<int> arr, int n)
{
    cout << "array : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void permutation(vector<int> nums, vector<vector<int>> &ans, int index)
{
    if (index>=nums.size())
    {
        ans.push_back(nums);
        return;
    }

    for (int i = index; i < nums.size(); i++)
    {
        swap(nums[i],nums[index]);
        cout<<"Swap at index : "<<index<<" i : "<<i<<" ";
        print(nums,nums.size());
        permutation(nums,ans,index+1);
        swap(nums[i],nums[index]);
        cout<<"back track : "<<index<<" i : "<<i<<" ";
        print(nums,nums.size());

    }
}

vector<vector<int>> permute(vector<int> &nums)
{
    vector<vector<int>> ans;
    permutation(nums, ans, 0);
    return ans;
}
int main()
{
    vector<int> arr = {1,2,3};
    int n = arr.size();
    print(arr, n);
    vector<vector<int>>ans=permute(arr);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<"{";
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<"}, ";

        
    }
    
}