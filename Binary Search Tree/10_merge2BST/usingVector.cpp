/*************************************************************

    Following is the Binary Tree node structure:

    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };

*************************************************************/

void inorder(TreeNode *root, vector<int>& ans){
       if(root==NULL){
           return ;
       }
       inorder(root->left, ans);
       ans.push_back(root->data);
       inorder(root->right, ans);

}

void merge(vector<int>inorder1,vector<int>inorder2,vector<int>&ans){
    int i=0,j=0;
    while(i<inorder1.size() || j<inorder2.size() ){
        if(i>=inorder1.size()){
            ans.push_back(inorder2[j++]);
        }
        else if(j<inorder2.size() && inorder1[i]>inorder2[j] ){
            ans.push_back(inorder2[j++]);
        }
        else{
            ans.push_back(inorder1[i++]);
        }
    }

}

vector<int> mergeBST(TreeNode *root1, TreeNode *root2)
{
    vector<int>inorder1;
    vector<int>inorder2;
    vector<int>ans;
    inorder(root1, inorder1);
    inorder(root2, inorder2);
    merge(inorder1,inorder2,ans);
    return ans;
   
}