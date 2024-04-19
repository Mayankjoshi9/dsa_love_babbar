#include <bits/stdc++.h> 
bool findRedundantBrackets(string &s)
{
    stack<int>st;
    for(int i=0;i<s.size();i++){
        int num=s[i];
        if(num=='+' || num=='/' || num=='-' || num=='*' || num=='('){
            st.push(s[i]);
        }
        else if(num==')'){
            if(st.top()=='('){
                return true;
            }
            while(st.top()!='('){
                st.pop();
            }
            st.pop();
        }
    }
    return false;
    
}