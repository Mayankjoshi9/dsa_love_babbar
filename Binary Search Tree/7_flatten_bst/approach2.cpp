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

/*
    Time Complexity - O(N)
    Space Complexity - O(N)

    Where N is the total number of nodes in the givrn BST.
*/

#include<vector>

void inorder(TreeNode<int>* root, vector<int> &inorderArray){
	if(root == NULL){
		return;
	}

	inorder(root->left, inorderArray);
	inorderArray.push_back(root->data);
	inorder(root->right, inorderArray);
}

TreeNode<int> *flatten(TreeNode<int>* root) {

	if(root == NULL){
		return root;
	}

	vector<int> inorderArray;
	inorder(root, inorderArray);

	// Create a pointer called newRoot, and store the first value of the array in it.
	TreeNode<int> *newRoot = new TreeNode<int>(inorderArray[0]);

	// Create a pointer called curr and store the newRoot in it.
	TreeNode<int> *curr = newRoot;

	for(int i = 1; i < inorderArray.size(); i++){

		// Create a new node.
		TreeNode<int> *temp = new TreeNode<int>(inorderArray[i]);

		// Make the left child of curr as NULL and right child as the temp. And make curr = temp.
		curr->left = NULL;
		curr->right = temp;
		curr = temp;
	}

	// Make both the left and the right child of the last node as NULL.
	curr->left = NULL;
	curr->right = NULL;

	return newRoot;
}