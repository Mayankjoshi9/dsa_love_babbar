class Solution {
  public:
    Node* ParentToChild(map<Node*,Node*> &m, Node* root, int target){
        queue<Node*>q;
        q.push(root);
        Node* ans=NULL;
        m[root]=NULL;
        
        while(!q.empty()){
            Node* temp= q.front();
            q.pop();
            if(temp->data==target){
                ans=temp;
            }
            if(temp->left){
                m[temp->left]=temp;
                q.push(temp->left);
            }
            if(temp->right){
                m[temp->right]=temp;
                q.push(temp->right);
            }
        }
        return ans;
    }
    
    int getMinTime(map<Node*,Node*> &nodeToParent, Node* target){
        
         unordered_map<Node*,bool> visited;
         queue<Node*> q;
         q.push(target);
         int time=0;
         
         while(!q.empty()){
             bool flag=0;
             int size=q.size();
             for(int i=0;i<size;i++){
                 
                 Node*front=q.front();
                 visited[front]=true;
                 q.pop();
                 if(nodeToParent[front] && !visited[nodeToParent[front]]){
                     flag=true;
                     q.push(nodeToParent[front]);
                 }
                 if(front->left && !visited[front->left]){
                     flag=true;
                     q.push(front->left);
                 }
                 if(front->right && !visited[front->right]){
                     flag=true;
                     q.push(front->right);
                 }
             }
             if(flag){
                time++; 
             }
             
             
         }
         return time;
    }
    int minTime(Node* root, int target) 
    {
         map<Node*,Node*> nodeToParent;
         int ans=0;
         Node* targetNode= ParentToChild(nodeToParent,root,target);
         
         ans=getMinTime(nodeToParent,targetNode);
         return ans;
         
    }
};