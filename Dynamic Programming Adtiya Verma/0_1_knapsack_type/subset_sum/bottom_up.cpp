//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
   
    bool isSubsetSum(vector<int>arr, int sum){
        int Size=arr.size();
         vector<vector<bool>> dp( Size+1, vector<bool> (sum+1,false));
         for(int i=0;i<=Size;i++){
            dp[i][0]=1;
         }
         
         for(int i=1;i<=Size;i++){
         for(int j=1;j<=sum;j++){
            
                if(arr[i-1]<=j){
                    dp[i][j]=dp[i-1][j-arr[i-1]] || dp[i-1][j];
                }
                else{
                    dp[i][j]=dp[i-1][j];
                }
                
            }
         }
         return dp[Size][sum];
         
    }
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends