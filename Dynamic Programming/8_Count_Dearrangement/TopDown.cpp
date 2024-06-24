

#include <bits/stdc++.h>
#define MOD 1000000007
long long int count(int n,vector<long long int>&dp){
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    
    long long int  ans=(n-1)*(count(n-2,dp)+count(n-1,dp));
    ans=ans%MOD;
    dp[n]=ans;
    return dp[n];
}
long long int countDerangements(int n) {
    vector<long long int>dp(n+1,-1);
    return count(n,dp);
} 