 #include<bits/stdc++.h>
 using namespace std;
 string restoreString(string s, vector<int>& indices) {
        char ans[100];
        int sz=s.size();
        s.copy(ans,sz,0);
        cout<<ans<<endl;
        for(int i=0;i<sz;i++){
            ans[indices[i]]=s[i];
        }
        return ans;
    }
int main(){
    string s="codeleet";
    vector<int> indices{4,5,6,7,0,2,1,3};
    cout<<restoreString(s,indices);
}