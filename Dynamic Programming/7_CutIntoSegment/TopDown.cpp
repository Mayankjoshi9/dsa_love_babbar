
#include <bits/stdc++.h>
int solve(int n,int x,int y,int z,vector<int>&dp){
	if(n<0){
		return -1;
	}
	if(n==0){
		return 0;
	}
	if(dp[n]!=-1){
		return dp[n];
	}

	int a=solve(n-x, x,y,z,dp);
	int b=solve(n-y, x, y, z,dp);
	int c=solve(n-z, x, y, z,dp);

    int maxi=max(a,max(b,c));
	if(maxi==-1){
		dp[n]= -1;
		return dp[n];
	}
	else{
		dp[n]= maxi+1;
		return dp[n];
	}
}
int cutSegments(int n, int x, int y, int z) {
	vector<int> dp(n+1,-1);
	if(solve(n,x,y,z,dp)==-1){
		return 0;
	}
	else{
		return solve(n, x, y, z,dp);
	}
}