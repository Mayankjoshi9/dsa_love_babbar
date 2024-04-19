class Solution
{
public:
   pair<int,int> sum(Node* root){
       if(root==NULL){
           pair<int,int> temp=make_pair(0,0);
           return  temp;
           
       }
       
       pair<int,int> leftPart=sum(root->left);
       pair<int,int> rightPart=sum(root->right);
       
       
       pair<int,int> ans;
       
       if(leftPart.first==rightPart.first){
           ans.first=leftPart.first+1;
           
           ans.second=max(leftPart.second,rightPart.second)+root->data;
       }
       else if(leftPart.first>rightPart.first){
           ans.first= leftPart.first+1;
           
           ans.second= leftPart.second+ root->data;
       }
       else{
            ans.first=rightPart.first+1;
            
            ans.second=rightPart.second+ root->data;
       }
       
       return ans;
       
   }
    
    int sumOfLongRootToLeafPath(Node *root)
    {
        return sum(root).second;
    }
};