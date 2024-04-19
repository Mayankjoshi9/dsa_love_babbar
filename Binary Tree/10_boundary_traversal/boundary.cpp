class Solution {
public:

    void leftTraverse(Node*root,vector<int>&ans){
        if(root==NULL || (root->left==NULL && root->right==NULL)){
            return ;
        }
        ans.push_back(root->data);
        if(root->left){
            leftTraverse(root->left,ans);
        }
        
        else {
            leftTraverse(root->right,ans);
        }
        
    }
    
    void rightTraverse(Node*root,vector<int>&ans){
        if(root==NULL || (root->right==NULL && root->left==NULL)){
            return ;
        }
        
        if(root->right){
        rightTraverse(root->right,ans);
        }
        
        else{
            rightTraverse(root->left,ans);
        }
        ans.push_back(root->data);
    }
    
    void node_traverse(Node* root, vector<int>&ans){
        if(root==NULL){
            return ;
        }
        if(root->left==NULL && root->right==NULL){
            ans.push_back(root->data);
        }
        node_traverse(root->left,ans);
        
        node_traverse(root->right,ans);
    }
    
    
    vector <int> boundary(Node *root)
    {
        vector<int>ans;
        if(root==NULL){
            return ans;
        }
        ans.push_back(root->data);
        leftTraverse(root->left,ans);
        
        node_traverse(root->left,ans);
        
        node_traverse(root->right,ans);
        
        rightTraverse(root->right,ans);
        return ans;
    }
};