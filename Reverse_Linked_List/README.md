# Reverse Linked List

# Reverse Linked List
## **Problem statement**
**Send feedback**
Given a singly linked list of integers. Your task is to return the head of the reversed linked list.
**For example:**
```
The given linked list is 1 -> 2 -> 3 -> 4-> NULL. Then the reverse linked list is 4 -> 3 -> 2 -> 1 -> NULL and the head of the reversed linked list will be 4.
```
**Follow Up :**
```
Can you solve this problem in O(N) time and O(1) space complexity?
```
**Detailed explanation**
**( Input/output format, Notes, Images )**
**Constraints :**
**`1 <= T <= 5
0 <= L <= 10^5
1 <= data <= 10^9 and data != -1
Time Limit: 1 sec`**
**Sample Input 1 :**
**`1
1 2 3 4 5 6 -1`
Sample Output 1 :**
**`6 5 4 3 2 1 -1`
Explanation For Sample Input 1 :**
**`For the first test case,  After changing the next pointer of each node to the previous node, The given linked list is reversed.`
Sample Input 2 :**
**`1
10 21 3 2 4 -1`
Sample Output 2 :**
**`4 2 3 21 10 -1`**
# Recursive approach
# Recursive 2 approach