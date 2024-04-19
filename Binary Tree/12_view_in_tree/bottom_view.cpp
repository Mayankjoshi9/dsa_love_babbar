//Function to return a list containing the bottom view of the given tree.

class Solution {
  public:
    vector <int> bottomView(Node *root) {
        map<int, int> nodes;
        queue<pair<Node*,int>> q;
        
        vector<int> ans;
        
        if(root==NULL){
            return ans;
        }  
            
        q.push(make_pair(root, 0));
        
        while(!q.empty()){
            pair<Node*, int> temp = q.front();
            q.pop();
            Node* frontNode= temp.first;
            int hd = temp.second;
            
            
            
             nodes[hd]=frontNode->data;
            
            
            if(frontNode->left){
                q.push(make_pair(frontNode->left,hd-1));
            }
            
            if(frontNode->right){
                q.push(make_pair(frontNode->right,hd+1));
            }
        }
        
        for(auto i : nodes){
            ans.push_back(i.second);
            
        }
        return ans; 
    }
};