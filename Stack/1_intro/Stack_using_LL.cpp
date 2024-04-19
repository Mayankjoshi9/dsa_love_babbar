#include<iostream>
using namespace std;
class Node{
    public:
      int data;
      Node*next=NULL;
      
      Node(int d){
         data=d;
         next=NULL;
      }
      

};

Node* push(Node*head,int data){
    Node*newnode=new Node(data);
    if(head==NULL){
         head=newnode;
         return head;
    }
    else{
        newnode->next=head;
        head=newnode;
    }
    return head;

}

void pop(Node*&head){
    if(head==NULL){
        cout<<"stack is empty";
        return ;
    }
    else{
        Node*temp=head;
        cout<<endl<<"Node with data = "<<temp->data<<" deleted."<<endl;
        head=head->next;
        delete temp;
        return ;

    }

}

void display(Node*head){
    if (head==NULL)
    {
        return;
    }
    display(head->next);
    cout<<head->data<<" ";
    
}   
    
int main(){
    Node*top=NULL;
    top=push(top,89);
    top=push(top,8);
    top=push(top,49);
    top=push(top,24);
    top=push(top,19);
    display(top);
    pop(top);
    pop(top);

    display(top);

    
}