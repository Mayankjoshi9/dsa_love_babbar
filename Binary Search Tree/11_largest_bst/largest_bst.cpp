int predecessor(TreeNode*root){
    TreeNode* temp=root->left;
    if(temp==NULL){
        return INT_MIN;
    }
    while(temp->right){
        temp=temp->right;
    }
    return temp->data;
}

int successor(TreeNode*root){
    TreeNode* temp=root->right;
    if(temp==NULL){
        return INT_MAX;
    }
    while(temp->left){
        temp=temp->left;
    }
    return temp->data;
}

pair<int,bool> maxBst(TreeNode* root,int &maxi){
       if(root==NULL){
           return {0,true};
       }

       pair<int,bool> left=maxBst(root->left, maxi);
       pair<int,bool> right=maxBst(root->right, maxi);
       
       if(left.second && right.second){
           if(root->data>= predecessor(root) && root->data <= successor(root)){
                  int sum= left.first+right.first+1;
                  maxi=max(maxi,sum);
                  return {sum,true};
           }
           else{
               maxi=max(maxi,max(left.first,right.first));
               return {0,false};
           }
       }
    
}
int largestBST(TreeNode * root){
      int maxi=0;
      maxBst(root, maxi);
      return maxi;
}