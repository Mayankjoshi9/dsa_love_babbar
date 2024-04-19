#include<bits/stdc++.h>
using namespace std;
bool check(vector<vector<int>> arr,int b,int n, int m ){
    int sumi=0;
    for(int i=0;i<arr.size();i++){
        for (int j=1;j<=arr[i][0];j++){
            
            if(arr[i][j]<=m){
                sumi+=arr[i][j];
            }
            
        }
        if (sumi>b){
                return false;
            } 
    }
    return true;
}

int findMaxX(int n, vector<vector<int>> &arr, int B)
{
    int s=0,e=0 ;
    int sum=0;
    int ans=-1 ;
    for (int i = 0; i < n; i++)
    {
        sum=0;
        for (int j = 1; j <= arr[i][0]; j++)
        {
             sum+=arr[i][j];
        }
        e=max(e,sum);
    }
    printf("e is %d\n",e);
    int m=s+(e-s)/2 ;
    
    while(s<=e)
    {
        if(check(arr,B,n,m)){
            ans=m;
            s=m+1;
        }
        else{
            
            e=m-1;
        }
        m=s+(e-s)/2;
    }
    return ans;
}

int main(){
    vector<vector<int>> arr{
        {3 ,1 ,2 ,3},
        {3 ,4 ,2 ,3},
        {3 ,1 ,10 ,2}
    };
    
    int B=20;
    int n=3;
    printf("%d",findMaxX(n,arr,B));
}