#include<bits/stdc++.h>
using namespace std;

int t[102][1002];

int knapsack(int n, int w, int wt[], int val[] ){
    if(n==0 || w==0){
        return 0;
    }
    if(t[n][w]!=-1){
        return t[n][w];
    }
    if(wt[n-1]<=w){
        return t[n][w]= max(val[n-1]+knapsack(n-1,w-wt[n-1],wt,val), knapsack(n-1,w,wt,val));
    }
    else {
        return t[n][w]=knapsack(n-1,w,wt,val);
    }
}

int main(){
    memset(t,-1,sizeof(t));
    
    int val[]={60, 100, 120};
    int wt[]={10, 20, 30 };
    int capacity=50;
    int n=sizeof(val)/sizeof(val[0]);
    cout<<knapsack(n,capacity,wt,val);
}