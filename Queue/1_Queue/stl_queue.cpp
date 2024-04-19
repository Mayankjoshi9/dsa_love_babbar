#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int>q;
    q.push(2);
    q.push(3);

    cout<<"printing top element : "<<q.front()<<endl;
    q.pop();
    cout<<"printing top element : "<<q.front()<<endl;
    q.pop();
    if(q.empty()){
        cout<<"stack is empty. "<<endl;
    }
    else{
        cout<<"stack is not empty . "<<endl;
    }

}