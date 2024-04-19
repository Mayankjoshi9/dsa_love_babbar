
void inorder(TreeNode<int>* root, vector<int> &inorderArray){
	if(root == NULL){
		return;
	}

	inorder(root->left, inorderArray);
	inorderArray.push_back(root->data);
	inorder(root->right, inorderArray);
}

TreeNode<int>* buildBst(vector<int> inorderArray, int s, int e){
    if(s>e){
        return NULL;
    }
    int mid=s+(e-s)/2;
    TreeNode<int>*root= new TreeNode(inorderArray[mid]);
    root->left=buildBst(inorderArray,  s, mid-1);
    root->right=buildBst(inorderArray, mid+1, e);
    return root;
}

TreeNode<int>* balancedBst(TreeNode<int>* root) {
       vector<int> inorderArray;
       inorder(root,inorderArray);
       int e=inorderArray.size()-1;
       root=buildBst(inorderArray,0,e);
       return root;

} 