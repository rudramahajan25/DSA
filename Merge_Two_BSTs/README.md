# Merge Two BSTs

# Merge Two BSTs
## **Problem statement**
**Send feedback**
You are given two binary search trees of integers having ***‘N’*** and ***‘M’*** nodes. Return an array that contains elements of both BST in sorted order.
A binary search tree (BST) is a binary tree data structure with the following properties.
```
• The left subtree of a node contains only nodes with data less than the node’s data.
• The right subtree of a node contains only nodes with data greater than the node’s data.
• Both the left and right subtrees must also be binary search trees.
```
**Detailed explanation**
**( Input/output format, Notes, Images )**
**Sample Input 1:**
```
2 1 3 -1 -1 -1 -1
4 -1 -1
```
**Sample Output 1:**
```
1 2 3 4
```
**Explanation For Sample Output 1:**
```
 The given BST are:-
```
![https://files.codingninjas.in/graph-18-9962.png](https://files.codingninjas.in/graph-18-9962.png)
![https://files.codingninjas.in/graph-17-9961.png](https://files.codingninjas.in/graph-17-9961.png)
```
The output will be 1 2 3 4
```
**Sample Input 2:**
```
4 2 7 -1 3 -1 -1 -1 -1
5 1 7 -1 -1 -1 -1
```
**Sample Output 2:**
```
1 2 3 4 5 7 7
```
**Constraints:**
```
1 <= 'N', 'M' <= 10^5
Time Limit: 1 sec
```