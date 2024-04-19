#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> a={{0,3 },{4,2},{4,8 },{7,7}};
    for(int i=0;i<a.size();i++){
       sort(a[i].begin(),a[i].end());
   }
   sort(a.begin(),a.end());
   for (int i = 0; i < a.size(); i++)
   {
     for (int j = 0; j < a[i].size(); j++)
     {
        cout<<a[i][j]<<" ";
     }
     cout<<endl;
   }
   int i=0,j=0,p=0;
   while (i<a.size()-1  )
   {
       j=i+1;
       int rightmost = a[i][1];
       cout<<"j and i : "<<i<<" " <<j<<endl;
      if (j<a.size() && rightmost>=a[j][0])
      {
            rightmost = min(rightmost, a[j][1]);
        j++;
      }
        p++;
        i=j; 
      
   }
    cout<<"p is : "<<p<<endl;
   }
   