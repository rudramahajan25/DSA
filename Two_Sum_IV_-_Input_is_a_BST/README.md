# Two Sum IV - Input is a BST

# Two Sum IV - Input is a BST
You have been given a Binary Search Tree and a target value. You need to find out whether there exists a pair of node values in the BST, such that their sum is equal to the target value.
A binary search tree (BST), also called an ordered or sorted binary tree, is a rooted binary tree whose internal nodes each store a value greater than all the values keys in the node's left subtree and less than those in its right subtree.
**Follow Up:**
```
Can you solve this in O(N) time, and O(H) space complexity?
```
**Detailed explanation**
**( Input/output format, Notes, Images )**
**Constraints:**
**`1 <= T <= 100
1 <= N <= 3000
-10^9 <= node data <= 10^9, (where node data != -1)
-10^9 <= target value <= 10^9
Where N denotes is the number of nodes in the given tree.
Time Limit: 1 second`**
**Sample Input 1:**
```
1
10 6 12 2 8 11 15 -1 -1 -1 -1 -1 -1 -1 -1
14
```
**Sample Output 1:**
```
True
```
**Explanation for sample 1:**
```
For the first test case, the sum of the nodes with values 2 and 12 equals the target value.
```
![https://files.codingninjas.in/bstinput1-6879.png](https://files.codingninjas.in/bstinput1-6879.png)
**Sample Input 2:**
```
1
5 3 7 -1 -1 6 8 -1 -1 -1 -1
20
```
**Sample output 2:**
```
False
```
**Explanation for sample 2:**
```
For the first test case, there is no such pair of nodes, the sum of which equals the target value.
```
![https://files.codingninjas.in/bstinput2-6880.png](https://files.codingninjas.in/bstinput2-6880.png)