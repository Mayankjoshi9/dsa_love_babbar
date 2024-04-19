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

int main()
{
    Node *root = NULL;
    // creating a tree
    // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1
    buildFromLevelOrder(root);
    level_order(root);

}

