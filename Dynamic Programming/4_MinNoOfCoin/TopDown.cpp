#include <bits/stdc++.h> 

int solve(vector<int> &num, int x, vector<int> &dp){
    if(x==0){
        return 0;
    }
    if(x<0){
        return INT_MAX;
    }
    if(dp[x]!=-1){
        return dp[x];
    }
      
      int ans=INT_MAX;
      for(int i=0;i<num.size();i++){
          
         ans=min(ans,solve(num,x-num[i],dp));

      }
      if(ans==INT_MAX){
          dp[x]= ans;
          return dp[x];
      }
      dp[x]=ans+1;
      return dp[x];

}

int minimumElements(vector<int> &num, int x)
{
    int ans=INT_MAX;
    vector<int> dp(x+1,-1);
    ans=solve(num, x, dp);

    if (ans == INT_MAX){
        return -1;
    }

    return ans;
}