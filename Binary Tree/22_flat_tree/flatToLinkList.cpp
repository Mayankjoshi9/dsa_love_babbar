class Solution
{
    public:
    
    Node* predecessor(Node* curr){
        Node* temp=curr->left;
        while( temp->right ){
            temp=temp->right;
        }
        return temp;
    }
    void flatten(Node *root)
    {
        Node* curr=root;
        while(curr!=NULL){
            if(curr->left){
                Node* pre=predecessor(curr);
                pre->right=curr->right;
                curr->right=curr->left;
                curr->left=NULL;
            }
            curr=curr->right;
        }
        
        
        
    }
};