#include <bits/stdc++.h>
using namespace std;
class Solution
{
    Node*reverse(Node*head){
        if(head==NULL||head->next==NULL){
            return head;
        }
        Node*curr=head;
        Node*p=reverse(head->next);
        curr->next->next=curr;
        curr->next=NULL;
        return p;
    }
    
    void insertAtTail(Node*&head,Node*&tail,int val){
        Node*newnode=new Node(val);
        if(head==NULL){
            head=newnode;
            tail=newnode;
            return;
        }
        else{
            tail->next=newnode;
            tail=newnode;
        }
    }
    
    Node*add(Node*first,Node*second){
        Node*ansHead=NULL;
        Node*ansTail=NULL;
             
        int carry=0;
        while(first!=NULL ||  second!=NULL || carry!=0){
            
            int val1=0;
            if(first!=NULL){
                val1=first->data;
            }
            int val2=0;
            if(second!=NULL){
                val2=second->data;
            }
            int sum=(val1+val2+carry);
            carry=sum/10;
            sum=sum%10;
            insertAtTail(ansHead,ansTail,sum);
            if (first!=NULL)
                first=first->next;
            if(second!=NULL)
                second=second->next;
            
        }
        return ansHead;
    }
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        if(first==NULL){
            return second;
        }
        if(second==NULL){
            return first;
        }
        first=reverse(first);
        second=reverse(second);
        
        Node*ans=add(first,second);
        ans=reverse(ans);
        return ans;
    }
};
int main(){

}