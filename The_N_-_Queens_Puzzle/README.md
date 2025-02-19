# The N - Queens Puzzle

# The N - Queens Puzzle
## **Problem statement**
**Send feedback**
The N Queens puzzle is the problem of placing N chess queens on an N * N chessboard such that no two queens attack each other.
Given an integer ‘N’, print all distinct solutions to the ‘N’ queen puzzle.
```
Two queens on the same chessboard can attack each other if any of the below condition satisfies:
1. They share a row.
2. They share a column.
3. They share a diagonal.
```
**Detailed explanation**
**( Input/output format, Notes, Images )**
### Sample Input 1:
```
1
4
```
### Sample Output 1:
```
0 0 1 0 1 0 0 0 0 0 0 1 0 1 0 0
0 1 0 0 0 0 0 1 1 0 0 0 0 0 1 0
```
### Explanation for Sample Input 1:
```
The 4 queens can be placed in two ways in a 4*4 chessboard. Both the configurations are shown in the below figure.
```
![https://files.codingninjas.in/queens-6663.png](https://files.codingninjas.in/queens-6663.png)
```
The chessboard matrix for the first configuration looks as follows:-
0 0 1 0
1 0 0 0
0 0 0 1
0 1 0 0
Queen contained cell is depicted by 1. As we can see, No queen is in the same row, column or diagonal of the other queens. Hence this is a valid configuration.
Similarly, the chessboard matrix for the second configuration looks as follows:-
0 1 0 0
0 0 0 1
1 0 0 0
0 0 1 0
Queen contained cell is depicted by 1. As we can see, No queen is in the same row, column or diagonal of the other queens. Hence this is also a valid configuration.
These are the only two valid configurations for 4-Queens.
```
### Sample Input 2:
```
1
3
```
### Sample Output 2:
```
```
### Explanation of Sample Input 2:
```
Since no possible configuration exists for 3 Queen's, the output remains empty.
```