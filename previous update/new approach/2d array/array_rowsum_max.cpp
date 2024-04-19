#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int sum(int arr[][3]){
    int maxsum=0;
    int row;
    for (int i = 0; i < 3; i++)
    {
        int sum=0;
        for (int j = 0; j < 3; j++)
        {
            sum+=arr[i][j];
        }
        if(sum>maxsum){
            maxsum=sum;
            row=i+1;
        }     
    }
    cout<<"row : "<<row<<endl;
    return maxsum;
    
}
int main(){
    // int arr[3][3]={{3,4,11},{20,12,1},{7,8,7}};
    // cout<<sum(arr);
    int a=1;
    int b=5;
    cout<<(a&b);
}