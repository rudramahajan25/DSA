# 148. Sort List

# 148. Sort List
Notes: Check this code properly
Given the `head` of a linked list, return *the list after sorting it in **ascending order***.
**Example 1:**
![https://assets.leetcode.com/uploads/2020/09/14/sort_list_1.jpg](https://assets.leetcode.com/uploads/2020/09/14/sort_list_1.jpg)
```
Input: head = [4,2,1,3]
Output: [1,2,3,4]
```
**Example 2:**
![https://assets.leetcode.com/uploads/2020/09/14/sort_list_2.jpg](https://assets.leetcode.com/uploads/2020/09/14/sort_list_2.jpg)
```
Input: head = [-1,5,3,4,0]
Output: [-1,0,3,4,5]
```
**Example 3:**
```
Input: head = []
Output: []
```
**Constraints:**
- The number of nodes in the list is in the range `[0, 5 * 104]`.
- `105 <= Node.val <= 105`
**Follow up:** Can you sort the linked list in `O(n logn)` time and `O(1)` memory (i.e. constant space)?