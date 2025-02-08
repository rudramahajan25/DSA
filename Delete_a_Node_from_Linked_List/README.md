# Delete a Node from Linked List

# Delete a Node from Linked List
Notes: Can be improved more check it once again and manage the time and space complexity
## **Problem statement**
You have been given a linked list of integers. Your task is to write a function that deletes a node from a given position, 'POS'.
**Note :**
```
Assume that the Indexing for the linked list always starts from 0.
If the position is greater than or equal to the length of the linked list, you should return the same linked list without any change.
```
**Illustration :**
```
The following images depict how the deletion has been performed.
```
Image-I :
![https://files.codingninjas.in/0000000000004029.png](https://files.codingninjas.in/0000000000004029.png)
Image-II :
![https://files.codingninjas.in/0000000000004033.png](https://files.codingninjas.in/0000000000004033.png)
**Detailed explanation**
**( Input/output format, Notes, Images )**
**Sample Input 1 :**
**`3 4 5 2 6 1 9 -1
3`
Sample Output 1 :**
**`3 4 5 6 1 9`
Explanation of Sample Output 1 :**
**`The data in the node with index 3 is 2 which has been removed.`
Sample Input 2 :**
**`3 4 5 2 6 1 9 -1
0`
Sample Output 2 :**
**`4 5 2 6 1 9`
Constraints :**
**`0 <= N <= 10^5
POS >= 0
Time Limit: 1sec`
Expected Complexity :**
**`Time Complexity  : O(N)
Space Complexity  : O(1)`**