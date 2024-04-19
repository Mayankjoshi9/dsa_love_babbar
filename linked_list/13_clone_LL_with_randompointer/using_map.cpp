 class Solution{  
   
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
        // 2. create a mapping
        unordered_map<Node*,Node*> oldToNewNode;
        Node*originalNode=head;
        Node*cloneNode=cloneHead;
        while(originalNode!=NULL && cloneNode!=NULL){
            oldToNewNode[originalNode]=cloneNode;
            originalNode=originalNode->next;
            cloneNode=cloneNode->next;
        }
        cloneNode=cloneHead;
        originalNode=head;
        while(originalNode!=NULL){
            cloneNode->arb=oldToNewNode[originalNode->arb];
            originalNode=originalNode->next;
            cloneNode=cloneNode->next;
        }
        return cloneHead;
        
    }

};