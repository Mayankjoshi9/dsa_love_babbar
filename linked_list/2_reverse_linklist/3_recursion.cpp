#include <iostream>
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


Node *reverseLinkedList(Node *head) 
{
    if(head==NULL || head->next==NULL){
        return head;}
    Node* chotahead=reverseLinkedList(head->next);
    head->next->next=head;
    head->next=NULL;
    return chotahead;
    
}

void reverselink(Node*&head){
    head=reverseLinkedList(head);
    
}

void insertatbegin(Node *&head, Node *&tail, int d)
{
    if (head == NULL && tail == NULL)
    {
        Node *newnode = new Node(d);
        newnode->next = head;
        head = newnode;
        tail = newnode;
    }
    else
    {
        Node *newnode = new Node(d);
        newnode->next = head;
        head = newnode;
    }
}

void insertatend(Node *&head, Node *&tail, int d)
{
    if (head == NULL && tail == NULL)
    {
        Node *newnode = new Node(d);
        tail->next = newnode;
        tail = newnode;
        head = newnode;
    }
    else
    {
        Node *newnode = new Node(d);
        tail->next = newnode;
        tail = newnode;
    }
}
void print(Node *head)
{
    if (head == NULL)
    {
        cout << "linked list is empty.";
    }
    else
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
    cout<<endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    insertatbegin(head, tail, 5);
    insertatbegin(head, tail, 50);
    insertatend(head, tail, 67);
    insertatend(head, tail, 70);
    print(head);
    reverselink(head);
    print(head);
}