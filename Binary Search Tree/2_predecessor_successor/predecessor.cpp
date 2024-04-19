#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
      int data;
      Node* left;
      Node* right;

      Node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
      }

};

Node* insertIntoBST(Node* &root,int d){
    if(root==NULL){
        root=new Node(d);
        return root;
    }
    if(d<root->data){
       root->left=insertIntoBST(root->left,d);
       return root;
    }
    else {
        root->right=insertIntoBST(root->right,d);
    }
    return root;
}
void takeInput(Node* &root){
    int data;
    cin>>data;

    while(data != -1){
        insertIntoBST(root,data);
        cin>>data;
    }
}

Node* searchInBST(Node *root, int x) {
    if(root == NULL) {
        return root;
    } else if(root->data == x) {
        return root;
    } else if(root->data < x) {
        // Recursively check for right subtree. 
        return searchInBST(root->right, x);
    } else {
        // Recursively check for left subtree. 
        return searchInBST(root->left, x);
    }
}

Node* findMax(Node* root){
    
    while(root->right!=NULL){
        root=root->right;
    }
    return root;
}

Node* findPredecessor(Node*root ,int d){
    Node* node= searchInBST(root,d);
    if(node->left!=NULL){
         return findMax(node->left);
    }
    Node* pre=NULL;
    while(root!=NULL){
        if(root->data>d){
            root=root->left;
        }
        else if(root->data<d){
            pre=root;
            root=root->right;
        }
        else{
            break;
        }
    }
    return pre;
}
int main(){
  Node* root=NULL;
  cout<<"Enter the data for Bst"<<endl; 
  takeInput(root);
  int data;
  cout<<"enter data : ";
  cin>>data;
  Node* predecessor=findPredecessor(root,data);
  if(predecessor)
      cout<<predecessor->data<<endl;
  else
      cout<<"NULL"<<endl;


}