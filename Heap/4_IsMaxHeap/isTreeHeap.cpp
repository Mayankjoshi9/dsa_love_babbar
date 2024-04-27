// User Function template for C++

// Structure of node
/*struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};*/

class Solution {
  public:

    bool solve(struct Node* tree, struct Node* prev){
        if(tree==NULL){
            return true;
        }
        if(prev!=NULL && prev->data< tree->data){
            return false;
        }
        struct Node* pre =tree;
        bool left=solve(tree->left,pre);
        bool right=solve(tree->right,pre);
        return left&& right;
        
    }
    
    int count(struct Node* tree){
        if(tree==NULL){
            return 0;
        }
        int left=count(tree->left);
        int right=count(tree->right);
        
        return left+right+1;
    }
    
    bool isCBT(struct Node* tree, int i ,int nodeCount){
        if(tree==NULL){
            return true;
        }
        
        if(i>nodeCount-1){
            return false;
        }
            
        else{
            bool left=isCBT(tree->left, 2*i+1, nodeCount);
            bool right=isCBT(tree->right,2*i+2,nodeCount);
            return left && right;
        }
    }
    bool isHeap(struct Node* tree) {
        struct Node* prev = NULL;
        return isCBT(tree,0,count(tree)) && solve(tree,prev);
        
    }
};