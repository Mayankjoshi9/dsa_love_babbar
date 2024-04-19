/* A binary tree node has data, pointer to left child
   and a pointer to right child 
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

// Should return  right view of tree
class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
       vector<int> ans;
       if(root==NULL){
           return ans;
       }
       queue<Node*> q;
       
       q.push(root);
       
       while(!q.empty()){
           int size = q.size();
           vector<Node*> t;
           for(int i=0;i<size;i++){
               Node* temp=q.front();
               t.push_back(temp);
               q.pop();
               
               if(temp->left){
                   q.push(temp->left);
               }
               
               if(temp->right){
                   q.push(temp->right);
               }
           }
           
           if(!t.empty()){
              ans.push_back(t[size-1]->data);
           }
       }
       
       return ans;
    }
};
