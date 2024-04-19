bool helper(BinaryTreeNode<int>* root,int & prev) {
    // Traverse the tree in inorder fashion
    // Keep track of previous node
    if (root) {
        if (!helper(root->left, prev)) {  // Check left subtree
            return false;
        }

        if (root->data < prev)  // Traversal not in ascending order.
        {
            return false;
        }

        prev = root->data;

        return helper(root->right, prev);  // Check right subtree
    }

    return true;
}

bool validateBST(BinaryTreeNode<int>* root) {
   int prev = INT_MIN;
    return (helper(root, prev));
}


void preorder(BinaryTreeNode<int>* root,vector<int> & bst){
    if(root==NULL){
        return ;
    }
    preorder(root->left,bst);
    bst.push_back(root->data);
    preorder(root->right, bst);
}
bool validateBST(BinaryTreeNode<int> *root) {
     vector<int> bst;
     preorder(root,bst);
     if(bst.size()==1 || bst.size()==0){
         return true;
     }
     for(int i=0;i<bst.size()-1;i++){
         if(bst[i]>bst[i+1]){
             return false;
         }
     }
     return true;
}




