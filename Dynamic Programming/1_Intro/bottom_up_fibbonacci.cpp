#include<bits/stdc++.h>
using namespace std;

int fib(int n,vector<int> &dp){
       dp[1]=1;
       dp[0]=0;
       for(int i=2;i<=n;i++){
               dp[i]=dp[i-1]+dp[i-2];
       }
       return dp[n];
}


int main()
{
        int n;
        cin>>n;
        
        vector<int> dp(n+1,-1);

        cout<<fib(n,dp)<<endl;
        return 0;
        
}