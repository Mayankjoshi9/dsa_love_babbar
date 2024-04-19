#include <bits/stdc++.h>
using namespace std;
void solve(stack<int> &inputStack,int count, int size){
    if(count==size/2){
        // pop middle element.
        inputStack.pop();
        return;
    }
    int num=inputStack.top();
    inputStack.pop();
    
    // recursivily calling
    solve(inputStack, count+1, size);
    
    // push back element which are popped earlier.
    inputStack.push(num);

}

void deleteMiddle(stack<int> &inputStack, int N) 
{
   int count=0;
   solve(inputStack,count,N);

}