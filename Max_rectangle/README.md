# Max rectangle

# Max rectangle
Given a binary matrix **M** of size **n X m**. Find the maximum area of a rectangle formed only of **1s** in the given matrix.
**Example 1:**
```
Input:
n = 4, m = 4
M[][] = {{0 1 1 0},
         {1 1 1 1},
         {1 1 1 1},
         {1 1 0 0}}
Output:8
Explanation:For the above test case the
matrix will look like
0 1 1 0
1 1 1 1
1 1 1 1
1 1 0 0
the max size rectangle is
1 1 1 1
1 1 1 1
and area is 4 *2 = 8.
```
**Your Task:** Your task is to complete the function **maxArea** which returns the maximum size rectangle area in a binary-sub-matrix with all 1’s. The function takes 3 arguments the first argument is the Matrix M[ ] [ ] and the next two are two integers n and m which denotes the size of the matrix M.
**Constraints:**1<=n,m<=10000<=M[][]<=1