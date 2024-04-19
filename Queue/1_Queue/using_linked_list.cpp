#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
  int data;
  Node*next;
  Node(int d){
    data=d;
    next=NULL;
  }
   
} ;

void Push(Node*&front,Node*&rear,int data){
    Node*newnode=new Node(data);
    if(front==NULL && rear==NULL){
        front=newnode;
        rear=newnode;
        return;
    }
    rear->next=newnode;
    rear=rear->next;
}
void Pop(Node*&front){
    if(front==NULL){
        cout<<"Queue is Empty. ";
        return;
    }
    Node*temp=front;
    front=front->next;
    delete temp;

    
}
void top(Node*front){
     if(front==NULL){
        return;
     }
     cout<<"front :- "<<front->data<<endl;
}
int main()
{
    Node*front=NULL;
    Node*rear=NULL;
    Push(front,rear,23);
    Push(front,rear,54);
    Push(front,rear,35);
    Pop(front);
    top(front);

}