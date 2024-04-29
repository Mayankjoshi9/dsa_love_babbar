#include <bits/stdc++.h> 
using namespace std;
string reArrangeString(string &s)
{
    unordered_map<char,int> ch;
    for(int i=0;i<s.size();i++){
          ch[s[i]]++;
    }

    priority_queue<pair<int,char>> pq;
// in this priority queue it compare firstly int(1st elem) and then goes for char(2nd elem)

    for(auto i: ch){
          pq.push({i.second, i.first});
    }
   
    string ans="";
    while(pq.size()>1){
         auto temp1=pq.top();
         pq.pop();

        auto temp2=pq.top();
         pq.pop();

         ans+=temp1.second;

         ans+=temp2.second;
         
         if(--temp1.first){
             pq.push(temp1);
         }
         if(--temp2.first){
             pq.push(temp2);
         }
         
    }

    if(!pq.empty()){
        if(pq.top().first>1){
            return "not possible";
        }
        else{
            ans+=pq.top().second;

        }
    }
    
    return ans;
    
}

int main(){
    string s="aaaabcc";
    cout<<reArrangeString(s)<<endl;
}