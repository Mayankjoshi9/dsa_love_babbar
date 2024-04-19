#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "memory is free for node with data " << value << endl;
    }
};


void insertNode(Node*&tail,int element,int d);
void printlink(Node* tail);
void InsertAtTail(Node*&head,int d);

Node* floyd_detect_loop(Node*head){
    if (head==NULL)
    {
        return NULL;
    }

    Node*fast=head;
    Node*slow=head;
    while (slow!=NULL && fast!=NULL)
    {
        slow=slow->next;
        fast=fast->next;
        if (fast!=NULL)
        {
            fast=fast->next;
        }
        if(slow==fast){
            
            return slow;
        }
        
    }
    return NULL;
}

Node *removeLoop(Node *head) {
  if (head == NULL) {
    return NULL;
  }
  Node *slow = head;
  Node *fast = head;
  while (fast != NULL && fast->next != NULL) {
    slow = slow->next;
    fast = fast->next->next;
    if (slow == fast) {
       slow = head ;
    //    for circular loop (loop from end to first element)
      if (slow == fast) {
        while (fast->next != slow) {
          fast = fast->next;
        }
      }
      else {
        while (slow->next != (fast->next)) {
          slow = slow->next;
          fast = fast->next;
        }
      }

      // this is starting point of loop
      cout<<"loop at "<<slow->next->data<<endl;
      // removing loop
      fast->next = NULL;
    }
  }
  return head;
}


int main(){
    Node*tail=NULL;
    insertNode(tail,2,4);   
    insertNode(tail,4,5);
    insertNode(tail,5,6);
    insertNode(tail,6,8);
    insertNode(tail,5,7);
    Node*loop=NULL;
    InsertAtTail(loop,34);
    InsertAtTail(loop,39);
    InsertAtTail(loop,40);
    InsertAtTail(loop,89);
    loop->next->next->next->next=tail;
    removeLoop(loop);
    if (floyd_detect_loop(loop)!=NULL)
    {
        cout<<"It is circular Linked List. "<<endl;    
    }
    else{
        cout<<"It is not circular Linked List. "<<endl;
    }
}











void insertNode(Node*&tail,int element,int d){
    if (tail==NULL)
    {
        Node* newNode=new Node(d);
        tail=newNode;
        newNode->next=newNode;
    }

    else{
        Node*curr=tail;
        while (curr->data!=element)
        {
            curr=curr->next;
        }
        
        Node*temp=new Node(d);
        temp->next=curr->next;
        curr->next=temp;
        
    }
    
}

void printlink(Node* tail){
    if (tail==NULL)
    {
        cout<<"linked list is empty ";
        return;
        
    }
    
    Node* temp=tail;
    do
    {
        cout<<tail->data<<" ";
        tail=tail->next;
    } while (tail!=temp);
    cout<<endl;
    
}

void InsertAtTail(Node *&head, int d)
{
    if(head==NULL){
        Node *newnode = new Node(d);
        head=newnode;
        return;
    }
    Node *newnode = new Node(d);
    Node*temp=head;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;

    
    
}
