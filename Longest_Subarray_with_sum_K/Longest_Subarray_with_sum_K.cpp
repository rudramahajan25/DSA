/*
Sample Input 1 :
7 3
1 2 3 1 1 1 1

Sample Output 1 :
3

Explanation Of Sample Input 1 :
Subarrays whose sum = ‘3’ are:
[1, 2], [3], [1, 1, 1] and [1, 1, 1]
Here, the length of the longest subarray is 3, which is our final answer.

Sample Input 2 :
4 2
1 2 1 3

Sample Output 2 :
1

Sample Input 3 :
5 2
2 2 4 1 2 

Sample Output 3 :
1

Expected time complexity :
The expected time complexity is O(n).

Constraints :
1 <= 'n', 'k' <= 10 ^ 3
0 <= 'a[i]' <= 10 ^ 9

Time Limit: 1-second
*/
#include <bits/stdc++.h>
int longestSubarrayWithSumK(vector<int> a, long long k) {
   int n = a.size(); 

    int left = 0, right = 0;
    long long sum = a[0];
    int maxLen = 0;
    while (right < n) {
       
        while (left <= right && sum > k) {
            sum -= a[left];
            left++;
        }

        
        if (sum == k) {
            maxLen = max(maxLen, right - left + 1);
        }

       
        right++;
        if (right < n) sum += a[right];
    }

    return maxLen;
}