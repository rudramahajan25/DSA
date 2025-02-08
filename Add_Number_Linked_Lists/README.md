# Add Number Linked Lists

# Add Number Linked Lists
Given two numbers, **num1,** and **num2**, represented by linked lists. The task is to return the head of the linked list representing the sum of these two numbers.
For example, the number **190** will be represented by the linked list, **1->9->0->null,** similarly **25** by **2->5->null.** Sum of these two numbers is ****190 + 25 = **215,** which will be represented by **2->1->5->null.** You are required to return the head of the linked list **2->1->5->null.**
**Note:** There can be leading zeros in the input lists, but there should not be any leading zeros in the output list.
**Examples:**
```
Input:num1 = 45 (4->5->null), num2 = 345 (3->4->5->null)
Output:3->9->0->null
Explanation:
For the given two linked list (4 5) and (3 4 5), after adding the two linked list resultant linked list will be (3 9 0).
```
![https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/700043/Web/Other/blobid1_1721847725.png](https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/700043/Web/Other/blobid1_1721847725.png)
```
Input:num1 = 0063 (0->0->6->3->null), num2 = 07 (0->7->null)
Output:7->0->null
Explanation:
For the given two linked list (0 0 6 3) and (0 7), after adding the two linked list resultant linked list will be (7 0).
```
![https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/700043/Web/Other/blobid2_1721847773.png](https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/700043/Web/Other/blobid2_1721847773.png)
**Expected Time Complexity:** O(n+m)**Expected Space Complexity:** O(max(n,m)) for the resultant list.
**Constraints:**
1 <= size of both linked lists <= 1060 <= elements of both linked lists <= 99
**Try more examples**