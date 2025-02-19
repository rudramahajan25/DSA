# Binary Tree from Inorder and Postorder

# Binary Tree from Inorder and Postorder
Given **inorder** and **postorder** traversals of a binary tree(having **n** nodes) in the arrays **in[]** and **post[]** respectively. The task is to construct a **unique** binary tree from these traversals.
Driver code will print the preorder traversal of the constructed tree.
Note:- The **inorder** and **postorder** traversals contain **unique** values, and every value present in the **postorder** traversal is also found in the **inorder** traversal.
**Examples:**
```
Input:n = 8, in[] = [4, 8, 2, 5, 1, 6, 3, 7], post[] = [8, 4, 5, 2, 6, 7, 3, 1]
Output:1 2 4 8 5 3 6 7
Explanation:For the given postorder and inorder traversal of tree the  resultant binary tree will be
          1
       /      \
     2        3
   /  \      /  \
  4   5    6   7
   \
    8
```
```
Input:n = 5, in[] = [9, 5, 2, 3, 4], post[] = [5, 9, 3, 4, 2]
Output:2 9 5 4 3
Explanation:The  resultant binary tree will be
           2
        /     \
       9      4
        \     /
         5   3
```
**Expected Time Complexity:** O(n)**Expected Auxiliary Space:** O(n)
**Constraints:**
1 <= n <= 1031 <= in[i], post[i] <= 106