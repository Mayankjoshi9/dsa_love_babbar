

#include <bits/stdc++.h> 
/************************************************************

    Following is the Binary Tree node structure
    
    template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/

void inorderTraverse(TreeNode<int>* root,vector<TreeNode<int>*> &ans){
         if(root==NULL){
             return ;
         }
         inorderTraverse(root->left, ans);
         ans.push_back(root);
          inorderTraverse(root->right, ans);
          

}
TreeNode<int>* flatten(TreeNode<int>* root)
{
    vector<TreeNode<int>*> inorder;
    if(root==NULL ){
        return root;
    }
     inorderTraverse(root, inorder);
     TreeNode<int>*Newroot=new TreeNode<int>(inorder[0]->data);
     TreeNode<int>*temp=Newroot;
     for(int i=1;i<inorder.size();i++){
         temp->right=new TreeNode<int>(inorder[i]->data);
         temp->left=NULL;
         temp=temp->right;
     }
     temp->left=NULL;
     temp->right=NULL;
    return Newroot;

}