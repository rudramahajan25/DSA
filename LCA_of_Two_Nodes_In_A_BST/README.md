# LCA of Two Nodes In A BST

# LCA of Two Nodes In A BST
## **Problem statement**
**Send feedback**
You are given a binary search tree of integers with N nodes. You are also given references to two nodes ***'P'*** and ***'Q'*** from this BST.
Your task is to find the lowest common ancestor(LCA) of these two given nodes.
The lowest common ancestor for two nodes P and Q is defined as the lowest node that has both P and Q as descendants (where we allow a node to be a descendant of itself)
A binary search tree (BST) is a binary tree data structure which has the following properties.
```
• The left subtree of a node contains only nodes with data less than the node’s data.
• The right subtree of a node contains only nodes with data greater than the node’s data.
• Both the left and right subtrees must also be binary search trees.
```
**For example:**
```
'P' = 1, 'Q' = 3
tree = 2 1 4 -1 -1 3 -1 -1 -1,
The BST corresponding will be-
```
![https://files.codingninjas.in/image13-6336.png](https://files.codingninjas.in/image13-6336.png)
```
Here, we can clearly see that LCA of node 1 and node 3 is 2.
```
**Detailed explanation**
**( Input/output format, Notes, Images )**
**Sample Input 1 :**
```
3 5
2 1 3 -1 -1 -1 5 -1 -1
```
**Sample Output 1:**
```
3
```
### Explanation for Sample 1:
```
The BST corresponding will be-
```
![https://files.codingninjas.in/merge-11-6334.png](https://files.codingninjas.in/merge-11-6334.png)
```
Here, we can clearly see that LCA of node 3 and node 5 is 3.
```
**Sample Input 2 :**
```
1 2
3 2 -1 1 -1 -1 -1
```
**Sample Output 2:**
```
2
```
**Constraints:**
```
1 <= 'N' <= 10^5
1 <= Data <= 10^6
Time Limit: 1sec
```