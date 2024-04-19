//User function Template for C++

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
        if(root==NULL){
            return;
        }
        
        if(root->left){
            Node* pre=predecessor(root);
            pre->right=root->right;
            flatten(root->left);
        }
        
        if(root->right){
           flatten(root->right); 
        }
        
        if(root->left){
            
            root->right=root->left;
            root->left=NULL;
        }
    }
};