class Solution
{
    void insertAtLast(Node*&first,Node*&last,int data){
        Node*newnode=new Node(data);
            
        if(first==NULL){
            first=newnode;
            last=newnode;
            return;
        }
        else{
            last->next=newnode;
            last=newnode;
        }
    }
    public:
    Node *copyList(Node *head)
    {
        // 1. create a clone list
        Node*temp=head;
        Node*cloneHead=NULL;
        Node*cloneTail=NULL;
        while(temp!=NULL){
            insertAtLast(cloneHead,cloneTail,temp->data);
            temp=temp->next;
        }
        Node*originalNode=head;
        Node*cloneNode=cloneHead;
        while(originalNode!=NULL){
            if(originalNode->arb==NULL){
                cloneNode->arb=NULL;
                
            }
            else{
                int data=originalNode->arb->data;
                Node*temp=cloneHead;
                while(temp!=NULL){
                    if(data==temp->data){
                        cloneNode->arb=temp;
                        break;
                    }
                    temp=temp->next;
                }
            }
            cloneNode=cloneNode->next;
            originalNode=originalNode->next;
        }
        return cloneHead;
        
    }

};