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
    int data;
    cout << "enter data : ";
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }
    root = new Node(data);
    cout << "Enter data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);

    return root;
}

void level_order(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    deque<Node *> q;
    cout << endl;
    q.push_back(root);
    q.push_back(NULL);
    bool reverse = true;
    while (!q.empty())
    {

        Node *front = q.front();
        q.pop_front();
        if (front == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push_back(NULL);
            }
            reverse = !reverse;
        }
        else
        {
            cout << front->data << " ";
            if (reverse)
            {
                if (front->right)
                {
                    q.push_back(front->right);
                }
                if (front->left)
                {
                    q.push_back(front->left);
                }
            }
            else
            {
                if (front->left)
                {
                    q.push_back(front->left);
                }
                if (front->right)
                {
                    q.push_back(front->right);
                }
            }
        }
    }
}

int main()
{
    Node *root = NULL;
    root = buildTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    level_order(root);
}