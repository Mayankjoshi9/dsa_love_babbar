BinaryTreeNode<int>* solve(vector<int> inorder,vector<int> pre,int &preOrderIndex,int s,int e, int n){
        if(s >  e  || preOrderIndex >=n){
            return NULL;
        }
        int ele=pre[preOrderIndex++];
        int  index;
        for(int i=s;i<=e;i++){
            if(ele==inorder[i]){
                index=i;
            }
        }
        BinaryTreeNode<int>* root=new BinaryTreeNode<int>(ele);
        
        root->left= solve(inorder, pre, preOrderIndex, s, index-1,n);
        
        root->right= solve(inorder,pre,preOrderIndex,index+1,e,n );
        
        return root;
    }

BinaryTreeNode<int>* preorderToBST(vector<int> &preorder) {
    int preOrderIndex=0;
    vector<int>inorder=preorder;
    sort(inorder.begin(),inorder.end());
    int n=preorder.size();
    BinaryTreeNode<int>* root=solve(inorder,preorder,preOrderIndex,0,n-1,n);
    return root;
}