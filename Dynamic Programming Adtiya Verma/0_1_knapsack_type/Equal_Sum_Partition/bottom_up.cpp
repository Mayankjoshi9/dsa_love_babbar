class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum=accumulate(nums.begin(),nums.end(),0);
        int size=nums.size();
        if(sum%2!=0){
            return false;
        }
        else{
            int target=sum/2;
            vector<vector<bool>>dp(size+1,vector<bool>(target+1,false));
            for(int i=0;i<size;i++){
                 dp[i][0]=true;
            }
            for(int i=1;i<=size;i++){
                for(int j=1;j<=target;j++){
                    if(nums[i-1]<=j){
                        dp[i][j]=dp[i-1][j-nums[i-1]] || dp[i-1][j];
                    }
                    else{
                        dp[i][j]=dp[i-1][j];
                    }
                }
            }
            return dp[size][target];
        }
    }
};