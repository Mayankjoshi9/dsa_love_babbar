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
        cout << "memory is free for Node with data " << value << endl;
    }
};


Node*getmiddle(Node*head){
    if(head==NULL || head->next==NULL){
        return head;
    }

    Node*slow=head;
    Node*fast=head->next;
    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        
        slow=slow->next;
    }
    return slow;
}

void printlink(Node *&head)
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

void InsertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void InsertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void InsertAtPosition(Node *&tail, Node *&head, int position, int d)
{
    if (position == 1)
    {
        InsertAtHead(head, d);
        return;
    }

    Node *temp = head;
    for (int i = 1; i < position - 1; i++)
    {
        temp = temp->next;
    }

    if (temp->next == NULL)
    {
        InsertAtTail(tail, d); // to point tail at end
        return;
    }

    Node *NodeToInsert = new Node(d);
    NodeToInsert->next = temp->next;
    temp->next = NodeToInsert;
}

int main(){
    Node *Node1 = new Node(25);
    Node *head = Node1;
    Node *tail = Node1;
    printlink(head);
    InsertAtHead(head, 45);
    printlink(head);
    InsertAtTail(tail, 55);
    printlink(head);
    InsertAtPosition(tail, head, 4, 23);
    printlink(head);
    Node*h=getmiddle(head);
    printlink(h);
}