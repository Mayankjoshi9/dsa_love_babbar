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
        // cloneNode at in between original node.   
        while(cloneNode!=NULL){
            Node*orgNext=originalNode->next;
            originalNode->next=cloneNode;
            originalNode=orgNext;
            Node*cloneNext=cloneNode->next;
            cloneNode->next=originalNode;
            cloneNode=cloneNext;
            
        }
        temp=head;
        
        // random pointer copy
        while(temp!=NULL){
            temp->next->arb=temp->arb?temp->arb->next:temp->arb;
            temp=temp->next->next;
        }
        originalNode=head;
        cloneNode=cloneHead;
        // revert change done in step2
        while(originalNode!=NULL){
            originalNode->next=cloneNode->next;
            originalNode=originalNode->next;
            if(originalNode!=NULL){
                cloneNode->next=originalNode->next;
            }
            else{
                cloneNode->next=NULL;
            }
            cloneNode=cloneNode->next;
            
            
        }
        return cloneHead;
        
    }

};