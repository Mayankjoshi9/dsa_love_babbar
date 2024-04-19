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

Node* findMin(Node* root){
    
    while(root->left!=NULL){
        root=root->left;
    }
    return root;
}

Node* findSuccessor(Node* root, int val){
     Node* node=searchInBST(root,val);
     if(node->right!=NULL){
        return findMin(root->right);
     }

     Node* successor=NULL;
     while(root!=NULL){
        if(root->data<val){
            root=root->right;
        }
        else if(root->data>val){
            successor=root;
            root=root->left;
        }
        else{
            break;
        }
     }

     return successor;
}

int main(){
  Node* root=NULL;
  cout<<"Enter the data for Bst"<<endl; 
  takeInput(root);
  int data;
  cout<<"enter data : ";
  cin>>data;
  Node* successor=findSuccessor(root,data);
  if(successor)
      cout<<successor->data<<endl;
  else
      cout<<"NULL"<<endl;


}