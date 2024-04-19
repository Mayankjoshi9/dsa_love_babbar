#include <bits/stdc++.h>
using namespace std; 
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	int aend=n-1;
    int bend=m-1;
    vector<int> ans;
    
        int  carry=0,sum=0;
        int i=aend,j=bend;
        for(;i>=0 && j>=0;i--,j--){
            sum=a[i]+b[j]+carry;
            carry=sum/10;
            sum=sum%10;
            ans.push_back(sum);

        }
        for (; j >=0; j--)
        {
            sum=b[j]+carry;
            carry=sum/10;
            sum=sum%10;
            ans.push_back(sum);
        }
        for (; i >=0; i--)
        {
            sum=a[i]+carry;
            carry=sum/10;
            sum=sum%10;
            ans.push_back(sum);
        }
        if(carry!=0){
            ans.push_back(carry);
        }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main(){
    vector<int>a{9,9,9};
    vector<int> b{9,9,9};
    int n=a.size(),m=b.size();
    vector<int> ans(findArraySum(a,n,b,m));
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<"  ";
    }
}