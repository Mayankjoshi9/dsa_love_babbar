#include <bits/stdc++.h> 
void interLeaveQueue(queue < int > & q) {
    int HalfSize=q.size()/2;
    queue<int>s;
    while(HalfSize){
        int ele=q.front();
        q.pop();
        s.push(ele);
        HalfSize--;
    }
    while(!s.empty()){
        int ele1=s.front();
        s.pop();
        int ele2=q.front();
        q.pop();
        q.push(ele1);
        q.push(ele2);
    }
}