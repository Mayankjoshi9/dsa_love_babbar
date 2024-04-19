#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

Node *buildTree(Node *root)
{
    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    root = new Node(data);
    if (data == -1)
    {
        return NULL;
    }
    cout << "Enter data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);
    return root;
}

void inOrder(Node*root){
     if(root==NULL){
        return;
     }
     inOrder(root->left);
     cout<<root->data<<" ";
     inOrder(root->right);
}

void postOrder(Node*root){
     if(root==NULL){
        return;
     }
     postOrder(root->left);
     postOrder(root->right);
     cout<<root->data<<" ";
}

void preOrder(Node*root){
     if(root==NULL){
        return;
     }
     cout<<root->data<<" ";
     preOrder(root->left);
     preOrder(root->right);
}

int main()
{
    Node *root = NULL;
    // creating a tree
    root = buildTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    inOrder(root);
    cout<<endl;
    postOrder(root);
    cout<<endl;
    preOrder(root);
    cout<<endl;

    
}

// 1
// 3 5
// 7 11 17
