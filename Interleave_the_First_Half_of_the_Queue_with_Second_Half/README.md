# Interleave the First Half of the Queue with Second Half

# Interleave the First Half of the Queue with Second Half
You are given a queue **Q** of **N** integers of even length, rearrange the elements by interleaving the first half of the queue with the second half of the queue.
**Note :** Return the modified queue after the rearrangement as vector/ArrayList .
**Example 1:**
```
Input:
N = 4
Q = {2,4,3,1}
Output:
{2,3,4,1}
Explanation:
After the mentioned rearrangement of the first half
and second half, our final queue will be {2,3,4,1}.
```
**Example 2:**
```
Input:
N = 2
Q = {3,5}
Output:
{3,5}
Explanation:
After the mentioned rearrangement of the first half
and second half, our final queue will be {3,5}.
```
**Expected Time Complexity:** O(N)**Expected Auxiliary Space:** O(N)
**Constraints:**2 <= N <= 105N is even1 <= Elements of Queue <= 103Sum of N over all test cases doesn't exceeds 106