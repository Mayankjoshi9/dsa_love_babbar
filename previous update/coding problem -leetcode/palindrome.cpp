#include<bits/stdc++.h>
using namespace std;
void isPalindrome(int x) {
        string str = to_string(x);
        char p[str.size()];
        int j=0;
        for(int i=str.size()-1;i>=0;i--){
            p[j]=str[i];
            j++;
        }
        for(int i=0;i<str.size();i++){
            cout<<p[i]<<endl;
        }
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i]!=p[i])
            {
               cout<<"false";
            }
            
        }
        cout<<"true";
        
        
        
        
    }

int main(){
    int x=121;
    isPalindrome(x);
}