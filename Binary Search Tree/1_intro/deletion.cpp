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

Node* deleteNode(Node* &root,int val){
    if(root==NULL){
        return root;
    }
    if(val==root->data){
        // 0 child
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }
        // 1 child
        if(root->left!=NULL && root->right==NULL){
            Node* temp=root->left;
            delete root;
            return temp;
            
        }
        if(root->right!=NULL && root->left==NULL){
            Node* temp= root->right;
            delete root;
            return temp;
        }

        // 2 child

        if(root->left!=NULL && root->right!=NULL){
            Node* temp=root->left;
            while(temp->right!=NULL){
                temp=temp->right;
            }
            root->data=temp->data;
            deleteNode(root->left,temp->data);
            return root;
        }

    }
    else if(val<root->data){
        root->left=deleteNode(root->left,val);
        return root;
    }
    else{
        root->right=deleteNode(root->right,val);
        return root;

    }

}


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

int main(){
  Node* root=NULL;
  cout<<"Enter the data for Bst"<<endl; 
  takeInput(root);
  level_order(root);
  deleteNode(root,50);
  level_order(root);
}

// 50 20 70 10 30 90 110 -1