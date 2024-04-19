class Solution{
    
    Node* solve(int in[],int pre[],int &preOrderIndex,int s,int e, int n){
        if(s >  e  || preOrderIndex >=n){
            return NULL;
        }
        int ele=pre[preOrderIndex++];
        int  index;
        for(int i=s;i<=e;i++){
            if(ele==in[i]){
                index=i;
            }
        }
        Node* root=new Node(ele);
        
        root->left= solve(in, pre, preOrderIndex, s, index-1,n);
        
        root->right= solve(in,pre,preOrderIndex,index+1,e,n );
        
        return root;
    }
    
    public:
    Node* buildTree(int in[],int pre[], int n)
    {
        int preOrderIndex=0;
        Node* root=solve(in,pre,preOrderIndex,0,n-1,n);
        return root;
            
    }
};