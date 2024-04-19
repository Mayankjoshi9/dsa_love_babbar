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

Node* predecessor(Node* curr){
    Node* temp=curr->left;
    while( temp->right && temp->right!=curr){
        temp=temp->right;
    }
    return temp;
}
void morris_traverse(Node* root){
    Node* curr=root;
    while(curr!=NULL){
        if(curr->left==NULL){
            cout<<curr->data<<" ";
            curr=curr->right;
            
        }
        else{
            

            Node* pre=predecessor(curr);   
            if(pre->right==NULL){
                cout<<curr->data<<" ";
                pre->right=curr;
                curr=curr->left;
            }
            else{
                
                pre->right=NULL;
                curr=curr->right;
            }
            
        }
    }
}

int main()
{
    Node *root = NULL;
    // creating a tree  
    root = buildTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    morris_traverse(root);
    
}