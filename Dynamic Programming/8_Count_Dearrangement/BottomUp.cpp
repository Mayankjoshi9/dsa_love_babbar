
#include <bits/stdc++.h>
#define MOD 1000000007
long long int count(int n){
    vector<long long int>dp(n+1,-1);
    dp[1]=0;
    dp[2]=1;
    for(int i=3;i<=n;i++){
        dp[i]=(i-1)*(dp[i-1]+dp[i-2]);
        dp[i]=dp[i]%MOD;
    }
    return dp[n];
}
long long int countDerangements(int n) {
    
    return count(n);
} 