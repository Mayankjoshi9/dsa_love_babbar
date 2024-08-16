#include<bits/stdc++.h>
using namespace std;


int knapsack(int n, int w, int wt[],int val[]){
    vector<vector<int>>dp(n+1,vector<int>(w+1,0));
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=w;j++){
            if(i==0 || j==0){
                dp[i][j]=0;
            }
           else if( wt[i-1]<=j){
              dp[i][j]=max(val[i-1]+dp[i-1][j-wt[i-1]],dp[i-1][j]);
           }
           else{
             dp[i][j]=dp[i-1][j];
           }
        }
    }
    return dp[n][w];


}

int main(){

    int val[]={60, 100, 120};
    int wt[]={10, 20, 30 };
    int capacity=50;
    int n=sizeof(val)/sizeof(val[0]);
    cout<<knapsack(n,capacity,wt,val);
}