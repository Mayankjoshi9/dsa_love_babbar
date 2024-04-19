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

Node* minVal(Node* root){
    while(root->left!=NULL){
        root=root->left;
    }
    return root;
}
int main(){
  Node* root=NULL;
  cout<<"Enter the data for Bst"<<endl; 
  takeInput(root);
  Node* minNode=minVal(root);
  cout<<minNode->data;


}