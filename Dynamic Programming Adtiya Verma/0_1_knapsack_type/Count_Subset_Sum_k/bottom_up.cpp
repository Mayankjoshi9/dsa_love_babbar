#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
int findWays(vector<int>& arr, int k)
{
	int size=arr.size();
	vector<vector<int>> dp(size+1,vector<int>(k+1,0));

	dp[0][0]=1;
	for(int i=1;i<=size;i++){
		for(int j=0;j<=k;j++){
			if(arr[i-1]<=j){
               dp[i][j]=dp[i-1][j-arr[i-1]]+dp[i-1][j];
			}else{
               dp[i][j]=dp[i-1][j];
			}
			dp[i][j]%=MOD;
		}
	}
	return dp[size][k];
}
