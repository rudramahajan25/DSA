# Remove duplicates from a sorted Doubly Linked List

# Remove duplicates from a sorted Doubly Linked List
## **Problem statement**
**Send feedback**
A doubly-linked list is a data structure that consists of sequentially linked nodes, and the nodes have reference to both the previous and the next nodes in the sequence of nodes.
You are given a sorted doubly linked list of size ***'n'***.
Remove all the duplicate nodes present in the linked list.
**Example :**
```
Input: Linked List: 1 <-> 2 <-> 2 <-> 2 <-> 3
Output: Modified Linked List: 1 <-> 2 <-> 3
Explanation: We will delete the duplicate values ‘2’ present in the linked list.
```
**Detailed explanation**
**( Input/output format, Notes, Images )**
**Sample Input 1 :**
```
5
1 2 2 2 3
```
**Sample Output 1 :**
```
1 2 3
```
**Explanation For Sample Input 1 :**
```
We will delete the duplicate values ‘2’ present in the linked list.
```
**Sample Input 2 :**
```
4
1 2 3 4
```
**Sample Output 2 :**
```
1 2 3 4
```
**Explanation For Sample Input 2 :**
```
The list contains no duplicates, so the final list is unchanged.
```
**Expected time complexity :**
```
The expected time complexity is O('n').
```
**Constraints :**
```
1 <= 'n' <= 10^5
1 <= 'data' in any node <= 10^6
Time limit: 1 sec
```