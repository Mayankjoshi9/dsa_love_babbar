#include <bits/stdc++.h> 
int findMinimumCost(string str) {
  if((str.size())%2!=0){
    return -1;
  }
  stack<char>st;
  for(int i=0;i<str.size();i++){
    if(str[i]=='{'){
      st.push(str[i]);
    }
    else{
      
      if(st.empty() || st.top()!='{'){
         st.push(str[i]);
      }
      else{
        st.pop();
      }
    } 
  }
  // int count=0;
  // while(!st.empty()){
  //   char ch=st.top();
  //   st.pop();
  //   if(st.top()==ch){
  //       count++;
  //   }
  //   else{
  //     count+=2;
  //   }
  //   st.pop();
  // }
  // return count;

  int a=0,b=0;
  while(!st.empty()){
    if(st.top()=='{'){
      b++;
    }
    else{
      a++;
    }
    st.pop();
  }
  int ans=(a+1)/2+(b+1)/2;
  return ans;
}