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

void sortedDLL(TreeNode *root, TreeNode *&head){
    if(root==NULL){
        return ;
    }

     sortedDLL(root->right, head);
     root->right=head;
     if (head) {
        head->left = root;
     }
     head=root;
     sortedDLL(root->left, head);


}

TreeNode* mergeLinkedList(TreeNode*head1, TreeNode*head2){
    TreeNode* head=NULL;
    TreeNode* tail=NULL;
    while(head1!=NULL && head2!=NULL){
        if(head1->data<head2->data){
            if(head==NULL){
                head=head1;
                tail=head1;
                head1=head1->right;
            }
            else{
                tail->right=head1;
                head1->left=tail;
                tail=head1;
                head1=head1->right;
            }
        }
        else{
            if(head==NULL){
                head=head2;
                tail=head2;
                head2=head2->right;
            }
            else{
                tail->right=head2;
                head2->left=tail;
                tail=head2;
                head2=head2->right;
            }
        }
    }

    while(head1!=NULL){
              tail->right=head1;
                head1->left=tail;
                tail=head1;
                head1=head1->right;
    }
    while(head2!=NULL){
                tail->right=head2;
                head2->left=tail;
                tail=head2;
                head2=head2->right;
    }
    return head;
}

int countNodes(TreeNode*head){
    int cnt=0;
     while( head!=NULL){
         cnt++;
         head=head->right;
     }
     return cnt;
}
TreeNode* sortedDLLToBst(TreeNode*&head, int n){
    //   base case 
    if( n<=0 || head==NULL){
          return NULL;
    }

    TreeNode* left = sortedDLLToBst(head,n/2);
    TreeNode*root= head;
    root->left=left;
    head=head->right;
    root->right=sortedDLLToBst(head,n-n/2-1);
    return root;    

}
void storeInOrder(TreeNode *root, vector<int> &arr)
{
    if (root != NULL)
    {
        storeInOrder(root->left, arr);
        arr.push_back(root->data);
        storeInOrder(root->right, arr);
    }
}

vector<int> mergeBST(TreeNode *root1, TreeNode *root2)
{
    TreeNode* head1=NULL;
    TreeNode* head2=NULL;
    sortedDLL(root1, head1);
    head1->left=NULL;
    sortedDLL(root2, head2);
    head2->left=NULL;
    TreeNode*head=mergeLinkedList(head1,head2);

    //   convert sorted linked list to bst
    TreeNode*merged= sortedDLLToBst(head,countNodes(head));
    vector<int> ans;
    storeInOrder(merged,ans);
    return ans;
    
}