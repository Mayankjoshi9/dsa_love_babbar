Node<int>*solve(Node<int>* first, Node<int>* second){
    // checking if 1st list contain single element 
    if(first->next==NULL){
        first->next=second;
        return first;
    }
    // initialising pointers
    Node<int>*curr1=first;
    Node<int>*next1=first->next;
    Node<int>*curr2=second;

// checking element of 2nd list in 1st list and inserting element of 2nd to 1st.
    while(next1!=NULL && curr2!=NULL){
        // if element range in between curr1 and next1
        if(curr1->data<=curr2->data && curr2->data<=next1->data){
            curr1->next=curr2;
            Node<int>*next2=curr2->next;
            curr2->next=next1;
            curr1=curr1->next;
            curr2=next2;

        }
        // if not between
        else{
            curr1=curr1->next;
            next1=next1->next;
            // check if first list ended
            if(next1==NULL){
                curr1->next=curr2;
            }
        }
    }
    return first;
}
Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    Node<int>*head=NULL;

   if(first==NULL){
       return second;
   }
   if(second==NULL){
       return first;
   }
   if(first->data<=second->data){
       head=solve(first,second);
   }
   else{
       head=solve(second,first);
   }
   return head;
}