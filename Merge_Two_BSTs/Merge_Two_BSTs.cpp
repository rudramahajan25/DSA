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
void inorder(TreeNode* root,vector<int>&ino)
{
    if(root == NULL)
    return ;
    inorder(root->left,ino);
    ino.push_back(root->data);
    inorder(root->right,ino);
}

vector<int> mergeArrays(vector<int>&a,vector<int>&b)
{
    vector<int> ans(a.size() + b.size());
    int i = 0, j = 0;
    int k = 0;
    while(i<a.size() && j < b.size())
    {
        if(a[i] < b[j])
        {
            ans[k++] = a[i];
            i++;
        }
        else
        {
            ans[k++] =b[j];
            j++;
        }
    }
    while(i<a.size()){
        ans[k++]= a[i];
        i++;
    }
    while(j<b.size()){
        ans[k++]= b[j];
        j++;
    }
    return ans;
}
TreeNode inorderToBST(int s,int e,vector<int>&inord)
{
    if(s>e)
        return NULL;
    int mid = (s+e)/2;
    TreeNoderoot = new TreeNode(inord[mid]);
    root->left = inorderToBST(s,mid-1,inord);
    root->right = inorderToBST(mid+1,e,inord);
    return root;
}
vector<int> mergeBST(TreeNode *root1, TreeNode *root2)
{
    // Write your code here.
    vector<int> bst1,bst2;
    inorder(root1,bst1);
    inorder(root2,bst2);

   
    return mergeArray
}
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
void convertIntoSortedDLL(TreeNode *root,TreeNode<int>* &head)
{
    // convert a BST to linked list
if(root == NULL)
	return NULL;

convertIntoSortedDLL(root->right,head);
root->right = head;
if(head!=NULL)
	head->right = head;
head = root;
convertIntoSortedDLL(root->left,head);
}

TreeNode* mergeLinkedList(TreeNode* head1,TreeNode* head2)
{// merge 2 sorted linked list
    TreeNode* head = NULL;
    TreeNode* tail = NULL;
    while(head1 != NULL && head2 != NULL)
    {
        if(head1->data < head2->data)
        {
            if(head == NULL)
            {
                head = head1;
                tail = head1;
                head1 = head1->right;
            }
            else
            {
                tail->right = head1;
                head1->left = tail;
                tail = head1;
                head1 = head1->right;
            }
        }
        else
        {
            if(head == NULL)
            {
                head = head2;
                tail = head2;
                head2 = head2->right;
            }
            else
            {
                tail->right = head1;
                head1->left = tail;
                tail = head1;
                head1 = head1->right;
            }
        }
    }
    while(head1 != NULL)
    {
       tail->right = head1;
       head1->left = tail;
       tail = head1;
       head1 = head1->right;  
    }
    while(head2 != NULL)
    {
       tail->right = head2;
       head2->left = tail;
       tail = head1;
       head2 = head1->right;  
    }
    return head;

}
int countNodes(TreeNode* head)
{
    int cnt = 0;
    TreeNode* temp = head;
    while(temp!= NULL)
    {
        cnt++;
        temp = temp->right;
    }
    return cnt;
}
TreeNode* sortedLLToBST(TreeNode* &head,int n)
{

    // sorted LL to BST
	    if(n<-0 || root == NULL) 
    {
        return NULL;
    }
    TreenNode* left = sortedLLToBST(head, n/2);
    TreenNode* root = head;
    root->left = left;
    head = head -> next;
    root->right = sortedLLToBST(head, n-n/2-1);
    return root;

}

vector<int> mergeBST(TreeNode *root1, TreeNode *root2)
{
    // Write your code here.
    TreeNode* head1 = NULL;
    convertIntoSortedDLL(root1,head1);
    head1->left = NULL;

    TreeNode* head2 = NULL;
    convertIntoSortedDLL(root2,head2);
    head2->left = NULL;

    TreeNode* head = mergeLinkedList(head1,head2);
    return sortedLLToBST(head, countNodes(head));
}