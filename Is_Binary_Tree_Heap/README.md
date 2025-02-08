# Is Binary Tree Heap

# Is Binary Tree Heap
You are given a binary tree, and the task is to determine whether it satisfies the properties of a max-heap.
A binary tree is considered a max-heap if it satisfies the following conditions:
1. **Completeness**: Every level of the tree, except possibly the last, is completely filled, and all nodes are as far left as possible.
2. **Max-Heap Property**: The value of each node is greater than or equal to the values of its children.
**Examples:**
```
Input: root[] = [97, 46, 37, 12, 3, 7, 31, 6, 9]
Output:true
Explanation: The tree is complete and satisfies the max-heap property.
```
![https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/881982/Web/Other/blobid0_1733648140.jpg](https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/881982/Web/Other/blobid0_1733648140.jpg)
```
Input: root[] = [97, 46, 37, 12, 3, 7, 31, N, 2, 4]
Output: false
Explanation: The tree is not complete, hence it is not a max-heap.
```
![https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/881982/Web/Other/blobid1_1733648320.jpg](https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/881982/Web/Other/blobid1_1733648320.jpg)
```
Input:root[] = [5, 2, 3]
      5
    /  \
   2    3
Output:true
Explanation: The tree follows the max-heap property because the root node (5) is greater than both of its children (2 and 3).
```
**Constraints:**1 ≤ number of nodes ≤ 1031 ≤ node->data ≤ 103