#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }
    ~Node(){
        int val=this->data;
        if (next!=NULL)
        {
            delete next;
            next=NULL;
        }
        cout<<"memory free for node with data "<<val<<endl;
        
    }
};

void reverselink(Node*&head){
    if (head==NULL || head->next==NULL)
    {
        return;
    }
    Node*prev=NULL;
    Node*curr=head;
    Node*next=NULL;
    while (curr!=NULL)
    {
        next=curr->next;
        // just a small change to point previous node
        curr->prev=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head=prev;
    
}

void InsertAtHead(Node *&head,Node *&tail, int d)
{
    if (head==NULL)
    {
        Node*temp=new Node(d);
        head=temp;
        tail=temp;
        
    }
    else{
    Node *temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;}
}

void InsertAtTail(Node *&tail,Node* &head, int d)
{
    if (tail==NULL)
    {
        Node*temp=new Node(d);
        tail=temp;
        head=temp;
        
    }
    else{
    Node *temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
    }
}

void InsertAtPosition(Node *&head, Node *&tail,int position, int d)
{
    if (position == 1)
    {
        InsertAtHead(head, tail,d);
        return;
    }
    Node *temp = head;
    for (int i = 1; i < position - 1; i++)
    {
        temp = temp->next;
    }

    if (temp->next == NULL)
    {
        InsertAtTail(tail,head,d); // to point tail at end
        return;
    }

    Node *NodeToInsert = new Node(d);
    NodeToInsert->next = temp->next;    
    NodeToInsert->prev=temp;
    temp->next = NodeToInsert;
    NodeToInsert->next->prev=NodeToInsert;
}

void deleteNode(int position,Node*head){
    //for one node only
     if (position==1)
     {
        Node*temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;   
     }
     else{
        Node*curr=head;
        Node*prev=NULL;
        for (int i = 1; i < position; i++)
        {
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        curr->next->prev=prev;
        curr->prev=NULL;
        curr->next=NULL;
        delete curr;
        
     }
     
}

void printlink(Node *head)
{
    cout << "linked list : ";
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    // Node *node1 = new Node(34);
    Node *head = NULL;
    Node *tail = NULL;

    InsertAtHead(head,tail, 23);
    printlink(head);

    InsertAtTail(tail,head, 56);
    printlink(head);

    InsertAtPosition(head,tail,2,89);
    printlink(head);

    InsertAtPosition(head,tail,3,42);
    printlink(head);
    
    reverselink(head);
    printlink(head);

}