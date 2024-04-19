#include<bits/stdc++.h>
using namespace std;
int compress(vector<char>& chars) {
        int ans=0;
        int i=0;
        
        while(i<chars.size()-1){
            int count=1;
            if(chars[i]==chars[i+1]){
                count++;
                i++;
                continue;
            }
            if(count==1){
                chars[ans]=chars[i];
                ans++;
            }
            else if(count >=2){
                chars[ans++]=chars[i];
                string str=to_string(count);
                for(int i=0;i<str.size();i++){
                       chars[ans]=str[i];
                       ans++;
                }

            }
            i++;
        }
        return ans;
    }
int main(){
    vector<char>chars={"a","a","b","b","c","c","c"};
    int ans=compress(chars);
    cout<<"size of array is : "<<ans<<endl;
    for(int i=0;i<ans;i++){
        cout<<chars[i]<<endl;
    }
}