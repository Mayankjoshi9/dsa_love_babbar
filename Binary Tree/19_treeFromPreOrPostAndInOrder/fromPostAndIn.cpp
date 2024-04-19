class Solution
{
    
     Node* solve(int in[],int post[],int &postOrderIndex,int s,int e, int n){
        if(s >  e  || postOrderIndex <0){
            return NULL;
        }
        int ele=post[postOrderIndex--];
        int  index;
        for(int i=s;i<=e;i++){
            if(ele==in[i]){
                index=i;
            }
        }
        Node* root=new Node(ele);
        
        root->right= solve(in,post,postOrderIndex,index+1,e,n );
        root->left= solve(in, post, postOrderIndex, s, index-1,n);
        
        return root;
    }
    
    
    public:

    //Function to return a tree created from postorder and inoreder traversals.
    Node *buildTree(int in[], int post[], int n) {
        int postOrderIndex=n-1;
        Node* root=solve(in,post,postOrderIndex,0,n-1,n);
        return root;
    }
};