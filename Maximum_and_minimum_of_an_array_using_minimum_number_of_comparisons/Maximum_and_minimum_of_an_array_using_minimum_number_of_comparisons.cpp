/*
Given an array of size N. The task is to find the maximum and the minimum element of the array using the minimum number of comparisons.

Examples:

Input: arr[] = {3, 5, 4, 1, 9}
Output: Minimum element is: 1
              Maximum element is: 9

Input: arr[] = {22, 14, 8, 17, 35, 3}
Output:  Minimum element is: 3
              Maximum element is: 35
*/
#include <bits/stdc++.h>
using namespace std;
struct Pair{
    int min;
    int max;
    
};
Pair findminmax(int arr[], int n) {
    Pair minmax;
    sort(arr,arr+n);
    minmax.min = arr[0];
    minmax.max = arr[n - 1];
   return minmax;
}
int main() {
    // Write C++ code here
    int arr[] = { 1000, 11, 445, 1, 330, 3000 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);
 
    Pair minmax = findminmax(arr, arr_size);
 
    cout << "Minimum element is " << minmax.min << endl;
    cout << "Maximum element is " << minmax.max << endl;
 
    return 0;
}