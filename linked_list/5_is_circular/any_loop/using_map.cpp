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


bool is_circular(Node*head){
    if(head==NULL){
        return false;
    }
    map<Node*,bool>visited;
    while (head!=NULL)
    {
        // cycle is present 
        if (visited[head]==true)
        {
            cout<<"loop present at "<<head->data<<endl;
            return true;
        }
        // otherwise
        else{
            visited[head]=true;
        }
        
        head=head->next;

    }
    return false; 
    
   
}
int main(){
    Node*tail=NULL;
    insertNode(tail,2,4);   
    insertNode(tail,4,5);
    insertNode(tail,5,6);
    insertNode(tail,6,8);
    insertNode(tail,5,7);
    printlink(tail);

    Node*head=NULL;
    InsertAtTail(head,34);
    InsertAtTail(head,39);
    InsertAtTail(head,40);
    InsertAtTail(head,89);
    
    if (is_circular(head))
    {
        cout<<"It is circular Linked List. ";    
    }
    else{
        cout<<"It is not circular Linked List. "<<endl;
    }

    if (is_circular(tail))
    {
        cout<<"It is circular Linked List. ";    
    }
    else{
        cout<<"it is not circular Linked List. ";
    }
    
}