class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
        vector<int> ans;
        queue<Node*>q;
        q.push(root);
        bool leftToRight=true;
        while(!q.empty()){
            
            int size=q.size();
            vector<int>temp;
            
            for(int i=0;i<size;i++){
                Node* top=q.front();
                q.pop();
                
                temp.push_back(top->data);
                
                if(top->left){
                    q.push(top->left);
                }
                
                if(top->right){
                    q.push(top->right);
                }
            }
            
            if(!leftToRight){
                reverse(temp.begin(),temp.end());
            }
            
            for(auto i:temp){
                ans.push_back(i);
            }
            
            leftToRight=!leftToRight;
            
        }
        return ans;
    }
};