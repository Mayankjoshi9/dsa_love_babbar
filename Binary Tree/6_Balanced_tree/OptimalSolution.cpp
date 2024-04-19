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

    public:
    
    pair<bool,int> isBalancedFast(Node*root){
        if(root==NULL){
            pair<bool,int>p=make_pair(true,0);
            return p;
        }
        pair<bool,int> l=isBalancedFast(root->left);
        pair<bool,int> r=isBalancedFast(root->right);
        
        bool leftAns=l.first;
        bool rightAns=r.first;
        
        pair<bool,int> ans;
        ans.second=max(l.second,r.second)+1;
        
        if(abs(l.second-r.second)>1 || !leftAns || !rightAns){
            ans.first=false;
        }
        else{
            ans.first=true;
        }
        return ans;
    }
    //Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node *root)
    {
        return isBalancedFast(root).first;
    }
};