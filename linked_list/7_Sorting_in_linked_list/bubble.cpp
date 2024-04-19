#include <bits/stdc++.h>
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
            this->next = NULL;
            delete this;
        }
        cout << "memory is free for node with data " << value << endl;
    }
};

void InsertAtHead(Node *&head, int d);
void InsertAtTail(Node *&tail, int d);
void InsertAtPosition(Node *&tail, Node *&head, int position, int d);
void deleteValue(int value, Node *&head);
void deleteNode(int position, Node *&head, Node *&tail);
void printlink(Node *&head);

Node *bubble(Node *head)
{
    
}

int main()
{
    Node *node1 = new Node(25);
    Node *head = node1;
    Node *tail = node1;
    InsertAtHead(head, 45);
    InsertAtTail(tail, 55);
    InsertAtPosition(tail, head, 4, 2);
    InsertAtHead(head, 23);
    InsertAtHead(head, 27);
    printlink(head);
    head = bubble(head);
    printlink(head);
}

void InsertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void InsertAtTail(Node *&tail, int d)
{
    if (tail == NULL)
    {
        Node *temp = new Node(d);
        tail = temp;
        return;
    }
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

void deleteValue(int value, Node *&head)
{
    Node *prev = NULL;
    Node *curr = head;
    while (curr != NULL)
    {
        if (curr->data == value)
        {
            prev->next = curr->next;
            curr->next = NULL;
            delete curr;
            return;
        }
        prev = curr;
        curr = curr->next;
    }
}

void deleteNode(int position, Node *&head, Node *&tail)
{
    Node *prev = NULL;
    Node *curr = head;
    //   deleting first Node
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        for (int i = 1; i < position; i++)
        {
            prev = curr;
            curr = curr->next;
        }
        if (curr->next == NULL)
        {
            tail = prev;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
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