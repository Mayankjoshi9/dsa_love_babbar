#include <bits/stdc++.h> 
const int mod=1e9+7;
int count(int n){
    vector<int> dp(n+1,-1);
    dp[0]=1;
    dp[1]=1;
    

    for(int i=2;i<=n;i++){
          
          dp[i]=(dp[i-1]+dp[i-2])%mod;
    }
    return dp[n];
}
int countDistinctWays(int nStairs) {

    return count(nStairs) ;

}