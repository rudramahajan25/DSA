# Two Stacks

# Two Stacks
## **Problem statement**
**Send feedback**
Design a data structure, which represents two [stacks](https://en.wikipedia.org/wiki/Stack_(abstract_data_type)) using only one array common for both stacks. The data structure should support the following operations:
```
push1(NUM) - Push ‘NUM’ into stack1.
push2(NUM) - Push ‘NUM’ into stack2.
pop1() - Pop out a top element from stack1 and return popped element, in case of underflow return -1.
pop2() - Pop out a top element from stack2 and return popped element, in case of underflow return -1.
```
There are 2 types of queries in the input
```
Type 1 - These queries correspond to Push operation.
Type 2 - These queries correspond to Pop operation.
```
Note:
```
1. You are given the size of the array.
2. You need to perform push and pop operations in such a way that we are able to push elements in the stack until there is some empty space available in the array.
3. While performing Push operations, do nothing in the situation of the overflow of the stack.
```
**Detailed explanation**
**( Input/output format, Notes, Images )**
**Constraints:**
**`0 <= S <= 10^5
1 <= Q <= 5*10^5
1 <= type, stackNo <= 2
0 <= NUM <= 10^9
Time Limit: 1 sec.`**
### **Sample Input 1:**
```
3 5
1 1 3
1 2 4
1 1 5
2 1
2 2
```
### **Sample output 1:**
```
5
4
```
### **Explanation of sample input 1:**
![https://files.codingninjas.in/2stackssampl21-6787.png](https://files.codingninjas.in/2stackssampl21-6787.png)
```
Here every step shows a snapshot of 2 stacks after each operation.
Initialising the size of the array to 3, twoStack = new TwoStack(3).
Then operation on two stacks occurs as follows:
twoStack.push1(3) // pushing 3 in stack1.
twoStack.push2(4) // pushing 4 in stack2.
twoStack.push1(5) // pushing 5 in stack1.
twoStack.pop1() // popping out from stack2, it returns 5.
twoStack.pop2() // popping out from stack2, it returns 4.
```
### **Sample Input 2:**
```
3 10
1 1 2
1 1 4
1 1 3
1 2 5
2 2
2 1
1 2 6
2 2
2 1
1 2 7
```
### **Sample output 2:**
```
-1
3
6
4
```
### **Explanation of sample input 2:**
![https://files.codingninjas.in/2stackssample2-6788.png](https://files.codingninjas.in/2stackssample2-6788.png)
```
Here every step shows a snapshot of 2 stacks after each operation.
Initialising the size of the array to 3, twoStack = new TwoStack(3).
Then operation on two stacks occurs as follows:
twoStack.push1(2) // pushing 2 in stack1.
twoStack.push1(4) // pushing 4 in stack1.
twoStack.push1(3) // pushing 3 in stack1.
twoStack.push2(5) // pushing 5 in stack2, but 3 elements are already in the array and there is no empty space hence it cannot be added.
twoStack.pop2() // popping out from stack2, it is already empty hence returns -1.
twoStack.pop1() // popping out from stack1, it returns 3.
twoStack.push2(6) // pushing 6 in stack2.
twoStack.pop2() // popping out from stack2, it returns 6.
twoStack.pop1() // popping out from stack1, it returns 4.
twoStack.push2(7) // pushing 7 in stack2.
```