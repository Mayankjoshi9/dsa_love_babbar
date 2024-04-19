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

void level_order(Node *root)
{
    if(root==NULL){
        return;
    }
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
           cout << temp->data << " ";

            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}


Node *buildFromLevelOrder(Node *&root)
{
    queue<Node *> q;
    int data;
    cout << "Enter the data: " << endl;
    cin >> data;
    root = new Node(data);
    q.push(root);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        int ldata;
        cout << "Enter data for inserting in left of " << temp->data << endl;
        cin >> ldata;
        if(ldata!=-1){
           temp->left = new Node(ldata);
           q.push(temp->left);
        }
        else
        {
            temp->left=nullptr;
        }
        
        
        int rdata;
        cout << "Enter data for inserting in right of " << temp->data << endl;
        cin >> rdata;
        if(rdata!=-1){
           temp->right = new Node(rdata);
           q.push(temp->right);
        }
        else{
            temp->right=nullptr;
        }
        
           

    }
}

void left_traverse(Node*root){
    if(root->left==NULL){
        return ;
    }
    cout<<root->data<< " ";
    left_traverse(root->left);
}

void right_traverse(Node*root){
    if(root->right==NULL){
        return ;
    }
    right_traverse(root->right);
    
    cout<<root->data<< " ";
}

void node_traverse(Node* root){
    if(root==NULL){
        return ;
    }
    node_traverse(root->left);
    if(root->left==NULL && root->right==NULL){
        cout<<root->data<< " ";
    }
    node_traverse(root->right);
}

int main()  
{
    Node *root = NULL;
    // creating a tree
    // 1 3 5 7 11 17 19 -1 -1 -1 -1 -1 -1 -1 -1
    buildFromLevelOrder(root);
    level_order(root);
    cout<<endl;
    left_traverse(root);
    cout<<endl;
    right_traverse(root->right);
    cout<<endl;
    node_traverse(root);

}