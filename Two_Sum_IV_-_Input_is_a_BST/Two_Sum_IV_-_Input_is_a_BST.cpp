#include <bits/stdc++.h> 
// Following is the Binary Tree node structure
/**************
class BinaryTreeNode {
    public : 
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this -> data = data;
        left = NULL;
        right = NULL;
    }
    
};
***************/
void inorder(BinaryTreeNode<int>* root,vector<int>&inord)
{
    if(root == NULL)
        return ;
    inorder(root->left,inord);
    inord.push_back(root->data);
    inorder(root->right,inord);

}

bool twoSumInBST(BinaryTreeNode<int>* root, int target) {
	//Write your code here
    vector<int>inord;
    inorder(root,inord);
    int i = 0;
    int j = inord.size()-1;
    while(i<j)
    {
        int sum = inord[i] + inord[j];
        if(sum == target)
            return true;
        else if(sum>target)
            j--;
    
        else
            i++;
    }
    return false;
	}