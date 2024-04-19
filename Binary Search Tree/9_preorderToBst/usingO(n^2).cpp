
int divide(vector<int>& preorder,int s, int e, int rootNode){
    for(int i=s; i<=e;i++){
        if(preorder[i]>rootNode){
            return i;
        }
    }
    return e+1;
}
BinaryTreeNode<int>* solve(vector<int>& preorder,int s, int e){
    if(s>e){
            return NULL;
    }
     BinaryTreeNode<int>*root= new BinaryTreeNode(preorder[s]);
     int index=divide(preorder,s,e,preorder[s]);
     
       
    root->left = solve(preorder, s + 1, index - 1);
    root->right=solve(preorder,index,e);
    return root;


}
BinaryTreeNode<int>* preorderToBST(vector<int> &preorder) {
    int s=0,e=preorder.size()-1;
    BinaryTreeNode<int>*root=solve(preorder,s,e);
    return root;
}