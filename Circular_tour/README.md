# Circular tour

# Circular tour
There are some gas stations along a circular route, where the amount of gas at the station is gas[i]. You have a car with an unlimited gas tank and it costs cost[i] of gas to travel from the ith station to its next (i + 1)th station. You begin the journey with an empty tank at one of the gas stations. Given two integer arrays gas as **a1**and cost as **a2**, return the starting gas station's index if you can travel around the circuit once in the clockwise direction, otherwise return -1. If there exists a solution, it is guaranteed to be unique.
**Examples:**
```
Input:a1= [4, 6, 7, 4], a2= [6, 5, 3, 5]
Output:1
Explanation: There are 4 petrol pumps with amount of petrol and distance to next petrol pump value pairs as {4, 6}, {6, 5}, {7, 3} and {4, 5}. The first point from where truck can make a circular tour is 2nd petrol pump. Output in this case is 1 (index of 2nd petrol pump).
```
```
Input:a1= [1, 2, 3, 4, 5], a2= [3, 4, 5, 1, 2]
Output:3
Explanation:You can start with station 3 to complete the circle without running out out of petrol.
```
```
Input:a1= [2, 3, 4], a2= [3, 4, 3]
Output: -1
Explanation:There is no petrol pump to start with such that you can complete the circle.
```
**Constraints:**1 ≤ arr1.size(), arr2.size() ≤ 1051 ≤ arr1[i], arr2[i] ≤ 105