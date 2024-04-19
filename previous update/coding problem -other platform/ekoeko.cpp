#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool possible(vector<int>wood,int m,int mid){
     int sum=0;
     for (int i = 0; i < wood.size(); i++)
     {
        if (wood[i]>=mid)
        {
            sum=sum+wood[i]-mid;
        }
        
     }
     if (sum>=m)
     {
        return 1;
     }
     else
     {
        return 0;
     }
     
     
     
     
}
int main(){
    vector<int> wood={4,42,40,26,46};
    int m=20;
    int s=0;
    int e=0,ans=-1;
    for (int i = 0; i < wood.size(); i++)
    {
        if (e<wood[i])
        {
            e=wood[i];
        }
        
    }
    int mid=s+(e-s)/2;
    while (s<=e)
    {
       if (possible(wood,m,mid))
       {
           ans=mid;
           s=mid+1;
       }
       else
       {
           e=mid-1;
       }
       mid=s+(e-s)/2;
       
        
    }
    cout<<"ans is : "<<ans;
    
    


}
