#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
       this->data=data;
       this->next=NULL;
    }
};

void InsertAtHead(Node* &head,int d){
      Node *temp=new Node(d);
      temp->next=head;
      head=temp;
}


void InsertAtTail(Node* &tail,int d){
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;
}

void InsertAtPostion

void printlink(Node* &head){
    cout<<"linked list : ";
    Node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    

}
int main(){
    Node *node1=new Node(25);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;
    Node* head=node1;
    Node* tail=node1;
    printlink(head);
    InsertAtHead(head,45);
    printlink(head);
    InsertAtTail(tail,55);
    printlink(head);
    

}