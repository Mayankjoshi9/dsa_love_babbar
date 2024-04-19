#include<bits/stdc++.h>
using namespace std;
bool search(vector<vector<int>>matrix,int target){
        int row=0;
        int col=matrix[0].size()-1;
        while(row <(matrix.size()) && col>=0){
            cout<<"element at : "<<matrix[row][col]<<endl;
            if(matrix[row][col]>target){
                col--;
            }
            else if(matrix[row][col]<target){
                row++;
            }
            else if(matrix[row][col]==target){
                return true;
            }
        }
        return false;
}
int main(){
    // vector<vector<int>> matrix={{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    vector<vector<int>> matrix={{-5}};
    int target=-5;
    cout<<search(matrix,target)<<endl;
}