
TreeNode *LCAinaBST(TreeNode *root, TreeNode *P, TreeNode *Q)
{
   
     while( root){
          if((root->data>=P->data && root->data<=Q->data) || (root->data<=P->data && root->data>=Q->data)){
              return root;
          }
          else if(root->data >P->data && root->data>Q->data){
              root=root->left;
          }
          else{
              root=root->right;
          }
     }
     return NULL;
}