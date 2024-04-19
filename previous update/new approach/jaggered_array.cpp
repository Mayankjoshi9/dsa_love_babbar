#include<bits/stdc++.h>
using namespace std;
int main(){
    int row,col;
    cout<<"no of row : ";
    cin>>row;
    vector <int>size;
    int **arr=new int*[row];
    for(int i=0;i<row;i++){
        cout<<"enter no of col : ";
        cin>>col;
        size.push_back(col);
        arr[i]=new int[col];
        for (int j = 0; j < col; j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < size[i]; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }

    for (int i = 0; i < row; i++)
    {
        delete []arr[i];
    }
    delete []arr;

    

}