#include <bits/stdc++.h>
using namespace std;
int pivot(vector<int>arr,int size){
        int s=0,e=size-1,m=s+(e-s)/2;
        while(s<e){
            cout<<"mid : "<<m<<endl;
            if(arr[m]>=arr[0]){
                if(arr[m]==arr[m+1]){
                    s=m;
                    
                }
                else{
                     s=m+1;
                }
                


            }
            
            else{
                e=m;
            }
            m=s+(e-s)/2;
        }
        return s;
    }
   
    bool check(vector<int>& nums) {
        int size=nums.size();
        int p=pivot(nums,size);
        cout<<"p is "<<p<<endl;
        vector<int>temp(nums);
        sort(temp.begin(),temp.end());
        if(temp==nums){
            return true;
        }
        for(int i=p;i<size+p-1;i++){
            cout<<"nums[i] is "<<nums[(i)%size]<<"  " ;  
            cout<<"nums[i+1] is "<<nums[(i+1)%size]<<endl ;  
            if(nums[(i)%size]>nums[(i+1)%size]){
                return false;
            }
            
        }
        return true;
    }


int main()
{
    vector<int> nums = { 1,2,1,1};
    cout << check(nums) << endl;
}
//   1,2,1,1
// 2,1