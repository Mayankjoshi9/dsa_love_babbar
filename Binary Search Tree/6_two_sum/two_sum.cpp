#include <bits/stdc++.h> 
// Following is the Binary Tree node structure
/**************
class BinaryTreeNode {
    public : 
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this -> data = data;
        left = NULL;
        right = NULL;
    }
    
};
***************/

#include <bits/stdc++.h> 
// Following is the Binary Tree node structure
/**************
class BinaryTreeNode {
    public : 
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this -> data = data;
        left = NULL;
        right = NULL;
    }
    
};
***************/

void inorderTraverse(BinaryTreeNode<int>*root, vector<int>&inorder){
         if(root==NULL){
             return;
         }
         inorderTraverse(root->left, inorder);
         inorder.push_back(root->data);
         inorderTraverse(root->right, inorder);

}

bool twoSumInBST(BinaryTreeNode<int>* root, int target) {
	 vector<int>inorder;
     inorderTraverse(root, inorder);

     int i=0,j=inorder.size()-1;
     while(i<j){
         int sum=inorder[i]+inorder[j];
         if(sum==target){
             return true;
         }
         else if(sum<target){
              i++;
         }
         else{
             j--;
         }
     }
     return false;
}