pair<int, int> predecessorSuccessor(TreeNode *root, int key)
{
    TreeNode * temp=root;
    int pre=-1;
    int suc=-1;
    while(temp && temp->data!=key){
        if(temp->data>key){
            suc=temp->data;
            temp=temp->left;
        }
        else{
            pre=temp->data;
            temp=temp->right;
        }
    }

    // pred
    TreeNode* leftTree= temp? temp->left:NULL;
    while(leftTree!=NULL){
         pre=leftTree->data;
         leftTree=leftTree->right;
    }

    // succ
    TreeNode* rightTree= temp?temp->right:NULL;
    while(rightTree!=NULL){
          suc=rightTree->data;
          rightTree=rightTree->left;
    }
    return {pre,suc};
}