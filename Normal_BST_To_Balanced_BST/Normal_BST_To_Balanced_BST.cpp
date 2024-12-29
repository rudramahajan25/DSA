/*************************************************************
    Following is the Binary Serach Tree node structure

    template <typename T>
    class TreeNode
    {
    public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if (left)
                delete left;
            if (right)
                delete right;
        }
    };

*************************************************************/
void inorder(TreeNode<int>* root,vector<int>&inord)
{
    if(root == NULL)
        return ;
    inorder(root->left,inord);
    inord.push_back(root->data);
    inorder(root->right,inord);

}
TreeNode<int>* inorderToBST(int s,int e,vector<int>&inord)
{
    if(s>e)
        return NULL;
    int mid = (s+e)/2;
    TreeNode<int>* root = new TreeNode<int>(inord[mid]);
    root->left = inorderToBST(s,mid-1,inord);
    root->right = inorderToBST(mid+1,e,inord);
    return root;
}
TreeNode<int>* balancedBst(TreeNode<int>* root) {
    // Write your code here.
    vector<int>inord;
    inorder(root,inord);
    return inorderToBST(0,inord.size()-1,inord);
}