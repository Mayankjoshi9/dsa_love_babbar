#include <bits/stdc++.h> 
void sort(stack<int> &stack,int num){
    if(stack.empty() || stack.top()<num){
        stack.push(num);
		return;
	}
	int ele=stack.top();
	stack.pop();
	sort(stack,num);
	stack.push(ele);
}
void sortStack(stack<int> &stack)
{
	if(stack.empty()){
		return;
	}
	int num=stack.top();
	stack.pop();
	sortStack(stack);
	sort(stack,num);
	
}