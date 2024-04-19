#include<vector>
class Solution{
   
  public:
   bool checkPalindrome(vector<int>list){
        int s=0;
        int e=list.size()-1;
        while(s<=e){
          if(list[s]==list[e]){
              s++;
              e--;
          }  
          else{
             return false;
             
          }
        }  
        return true;
   }
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
       vector<int>list;
       Node*temp=head;
       while(temp!=NULL){
           list.push_back(temp->data);
           temp=temp->next;
       }
       return checkPalindrome(list);
    }
};