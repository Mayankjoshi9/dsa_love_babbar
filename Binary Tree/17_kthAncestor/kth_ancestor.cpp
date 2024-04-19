

//User function Template for C++
/*
Structure of the node of the binary tree is as
struct Node
{
	int data;
	struct Node *left, *right;
};
*/
// your task is to complete this function

int solve(Node*root,int &k, int node,int &ans){
    if(root==NULL){
        return 0;
    }
    
    
    if(root->data==node){
        return root->data;
    }
    
    bool left=solve(root->left,k,node,ans);
    bool right=solve(root->right,k,node,ans);
    
    if(left){
        k--;
        if(k==0){
           ans=root->data;
           k--;
       }
       return left;
    }
    else if(right){
        k--;
        if(k==0){
           ans=root->data;
           k--;
       }
       return right;
    }
    
    
    
}

int kthAncestor(Node *root, int k, int node)
{
    int ans=-1;
    solve(root,k,node,ans);
    return ans;
}