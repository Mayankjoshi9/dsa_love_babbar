#include<iostream>
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

void divide(Node*head,Node*&head1,Node*&head2){
    if (head==NULL && head->next==head)
    {
        return ;
    }
    head1=head;
    Node*slow=head;
    Node*fast=head->next;
    while (fast!=head && fast->next!=head )
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    head2=slow->next;
    Node*temp=head2;
    slow->next=head;
    while (temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=head2;
    

}
void deleteNode(Node* &tail,int value);
void insertNode(Node*&tail,int element,int d);
void printlink(Node* tail);

int main(){
    Node*tail=NULL;
    insertNode(tail,2,4);   
    insertNode(tail,4,5);
    insertNode(tail,5,6);
    insertNode(tail,6,8);
    insertNode(tail,5,7);
    insertNode(tail,8,9);

    printlink(tail);   
    Node*head1,*head2;
    divide(tail,head1,head2);
    printlink(head1);
    printlink(head2);

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

void deleteNode(Node* &tail,int value){

    if (tail==NULL)
    {
        cout<<"list is empty, please check again "<<endl;
        return;
    }
    else{
        Node* prev=tail;
        Node* curr=prev->next;
        while (curr->data!=value)
        {
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        // one node link list 
        if (curr==prev)
        {
            tail=NULL;
        }
        
        if (tail==curr)
        {
            tail=curr->next;
        }
        
        curr->next=NULL;
        delete curr;
    }
    
}