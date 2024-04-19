#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
vector<vector<int>> triplet(vector<int>arr, int n, int K) {
    vector<vector<int>> ans;
    for(int i=0; i<arr.size(); i++){
        for(int j=i+1; j<arr.size(); j++){
            for(int k=j+1; k<arr.size(); k++){
                if(arr[i]+arr[j]+arr[k]==K){
                    vector<int> p;
                    p.push_back(arr[i]);
                    p.push_back(arr[j]);
                    p.push_back(arr[k]);
                    ans.push_back(p);
                    
                }
            }
        }
    }
    return ans;
}
int main(){
    int arr[]={10 ,5 ,5 ,5 ,2};
    int n=sizeof(arr)/sizeof(int);
    int K=12;
    triplet(arr,n,K);
}