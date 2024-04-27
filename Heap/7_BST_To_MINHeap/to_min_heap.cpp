#include <bits/stdc++.h>
using namespace std;
 
// Structure of a node of BST
struct Node {
 
    int data;
    Node *left, *right;
};
 
/* Helper function that allocates a new node
   with the given data and NULL left and right
   pointers. */
struct Node* getNode(int data)
{
    struct Node* newNode = new Node;
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}
 
void inorder(struct Node* root, vector<int> &arr){
	if(root==NULL){
        return;
	}
	inorder(root->left,arr);
	arr.push_back(root->data);
	inorder(root->right,arr);
}

void convertToMin(struct Node* root, vector<int> &arr,int& i){
	if(root==NULL){
		return;
	}
	root->data=arr[i++];
	convertToMin(root->left,arr,i);
	convertToMin(root->right,arr,i);
}

void preorder(struct Node* root){
	if(root==NULL){
		return;
	}
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}
int main(){
	struct Node* root = getNode(4);
    root->left = getNode(2);
    root->right = getNode(6);
    root->left->left = getNode(1);
    root->left->right = getNode(3);
    root->right->left = getNode(5);
    root->right->right = getNode(7);

	vector<int> inorderArr;
	inorder(root,inorderArr);
    int i=0;
	convertToMin(root,inorderArr,i);
    
	preorder(root);



}