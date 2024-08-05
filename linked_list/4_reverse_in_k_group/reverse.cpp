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

Node* reverse_k(Node*&head,int k){
    if (head==NULL)
    {
        return NULL;
    }
    
    int p=0;
    Node*current=head;
    Node*prev=NULL;
    Node*next=NULL;
    while(p<k && current!=NULL){
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
        p++;
    }
    head->next=reverse_k(next,k);
    return prev;
}


void InsertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    Node *temp1=tail;
    while (temp1->next!=NULL)
    {
        temp1=temp1->next;
    }
    temp1->next = temp;
    
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
int main(){
    // 14 16 4 6 3 18 8 2
    Node* head=new Node(14);
    InsertAtTail(head,16);
    InsertAtTail(head,4);
    InsertAtTail(head,6);
    InsertAtTail(head,3);
    InsertAtTail(head,18);
    InsertAtTail(head,8);
    InsertAtTail(head,2);

    printlink(head);
    head=reverse_k(head,5);
    printlink(head);

}