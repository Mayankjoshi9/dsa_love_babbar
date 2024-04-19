    bool isValidParenthesis(string s)
    {
        stack<char>st;
        map<char,char>m;
        m['}']='{';
        m[')']='(';
        m[']']='[';
        for(int i=0;i<s.size();i++){
            if(s[i]=='{' || s[i]=='[' || s[i]=='('){
                st.push(s[i]);
            }
            else{
                if(st.empty()){
                        return 0;
                    }
                char ele=m[s[i]];
                if(st.top()==ele ){
                    st.pop();
                }
                else{
                    return 0;
                }
            }
        }

        if(st.empty()){
            return 1;
        }
        return 0;
    }