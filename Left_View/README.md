# Left View

# Left View
Given a Binary Tree, return Left view of it. Left view of a Binary Tree is set of nodes visible when tree is visited from Left side. The task is to complete the function **leftView()**, which accepts root of the tree as argument. If no left view is possible, return an empty tree.
Left view of following tree is 1 2 4 8.
1       /     \     2        3   /     \    /    \  4     5   6    7   \     8
**Example 1:**
```
Input:
   1
 /  \
3    2
Output:1 3
```
**Example 2:**
```
Input:
Output:10 20 40
```
![https://media.geeksforgeeks.org/wp-content/cdn-uploads/20190221103723/leftview.jpg](https://media.geeksforgeeks.org/wp-content/cdn-uploads/20190221103723/leftview.jpg)
**Expected Time Complexity:** O(N).**Expected Auxiliary Space:** O(N).
**Constraints:**0 <= Number of nodes <= 1000 <= Data of a node <= 1000