class Solution{
  private:
    Node*getMid(Node*head){
        Node*slow=head;
        Node*fast=head->next;
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow;
    }
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
    
    
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        if(head==NULL || head->next==NULL){
            return true;
        }
        Node*middle=getMid(head);
        Node*temp=middle->next; 
        // reverse the list from next to middle element
        middle->next=reverse(temp);
        
        Node* head1=head;
        Node*head2=middle->next;
        // compare the two half of linked list
        while(head2!=NULL){
            // making list as given early
            if(head1->data!=head2->data){
                temp=middle->next;
                middle->next=reverse(temp);
                return 0;
            }
            head1=head1->next;
            head2=head2->next;
        }
        // making list as given early
        temp=middle->next;
        middle->next=reverse(temp);
        return 1 ;
        
       
    }
};