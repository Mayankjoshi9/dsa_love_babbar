int solve(BinaryTreeNode<int>* root, int k, int& i){
       if(root==NULL){
           return -1;
       }

       int left= solve(root->left, k, i);
       if(i==k){
           i++;
           return root->data;
       }
       i++;
       int right=solve(root->right,k,i);
       if(left !=-1 ){
           return left;
       }
       if( right!=-1){
           return right;
       }
       return -1;
    

}
int kthSmallest(BinaryTreeNode<int>* root, int k) {
    int i=1;
   int ans=solve(root,k,i);
   return ans;
}