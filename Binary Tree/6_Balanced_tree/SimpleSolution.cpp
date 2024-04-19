/* A binary tree node structure

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution{
    int height(struct Node* node){
        if(node==NULL){
            return 0;
        }
        int left=height(node->left);
        int right=height(node->right);
        int ans=max(left,right)+1;
        return ans;
    }
    public:
    //Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node *root)
    {
        if(root==NULL){
            return 1;
        }
        bool l=isBalanced(root->left);
        bool r=isBalanced(root->right);
        
        int left=height(root->left);
        int right=height(root->right);
        
        if(abs(right-left)>1 || !l || !r){
            return 0;
        }
        return 1;
        
        
    }
};