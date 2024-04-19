#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>>a{{1,2,2,1,1},{1,3,452,4},{1,3,3,1}};
    cout<<"array size is "<<a.size()<<endl;
    cout<<"row 1 size is "<<a[0].size()<<endl;
    sort(a.begin(),a.end());
    cout<<"element are : \n";
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < a[i].size(); j++)
        {
            cout<<a[i][j]<<"  ";
        }
        cout<<endl;
        
    }
    

}