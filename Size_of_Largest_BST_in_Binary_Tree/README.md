# Size of Largest BST in Binary Tree

# Size of Largest BST in Binary Tree
## **Problem statement**
**Send feedback**
You have been given a Binary Tree of ***'N'*** nodes, where the nodes have integer values. Your task is to return the size of the largest subtree of the binary tree which is also a BST.
A binary search tree (BST) is a binary tree data structure which has the following properties.
```
• The left subtree of a node contains only nodes with data less than the node’s data.
• The right subtree of a node contains only nodes with data greater than the node’s data.
• Both the left and right subtrees must also be binary search trees.
```
**Example:**
```
Given binary tree:
```
![https://files.codingninjas.in/image2-5995.png](https://files.codingninjas.in/image2-5995.png)
```
In the given binary tree, subtree rooted at 2 is a BST and its size is 3.
```
**Detailed explanation**
**( Input/output format, Notes, Images )**
**Sample Input 1 :**
```
2 1 3 -1 -1 -1 -1
```
**Sample Output 1:**
```
3
```
### Explanation for Sample 1:
```
In the given binary tree, subtree rooted at 2 is a BST and its size is 3.
```
![https://files.codingninjas.in/image1-5996.png](https://files.codingninjas.in/image1-5996.png)
**Sample Input 2 :**
```
50 -1 20 -1 30 -1 40 -1 50 -1 -1
```
**Sample Output 2:**
```
4
```
**Constraints :**
```
1 <= 'N' <= 10^5
0 <= 'data' <= 10^5
where 'N' is the number of nodes and 'data' denotes the node value of the binary tree nodes.
Time limit: 1 sec
```