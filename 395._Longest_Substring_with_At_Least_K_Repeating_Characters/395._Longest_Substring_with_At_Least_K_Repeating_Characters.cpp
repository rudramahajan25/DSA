/*
Given a string s and an integer k, return the length of the longest substring of s such that the frequency of each character in this substring is greater than or equal to k.

if no such substring exists, return 0.

 

Example 1:

Input: s = "aaabb", k = 3
Output: 3
Explanation: The longest substring is "aaa", as 'a' is repeated 3 times.
Example 2:

Input: s = "ababbc", k = 2
Output: 5
Explanation: The longest substring is "ababb", as 'a' is repeated 2 times and 'b' is repeated 3 times.
 

Constraints:

1 <= s.length <= 104
s consists of only lowercase English letters.
1 <= k <= 105
*/
class Solution {
public:
    int longestSubstring(string s, int k) {
        int ans = 0;
        int freq[26] = {0};
        int n = s.size();
        for (int i = 0; i < n; i++) {
            freq[s[i] - 'a']++;
        }
        int unique = 0;
        for (int i = 0; i < 26; i++)
            if (freq[i] != 0)
                unique++;
        for (int curr_unique = 1; curr_unique <= unique; curr_unique++) {
            memset(freq, 0, sizeof(freq));
            int start = 0, end = 0;
            int cnt = 0, count_k = 0;
            while (end < n) {
                if (cnt <= curr_unique) {
                    int ind = s[end] - 'a';
                    if (freq[ind] == 0)
                       cnt++;
                    freq[ind]++;
                    if (freq[ind] == k)
					count_k++;

                    end++;

                } else {
                    int ind = s[start] - 'a';
                    if (freq[ind] == k)
                        count_k--;
                    freq[ind]--;
                    if (freq[ind] == 0)
                        cnt--;
                    start++;
                }
                if (cnt == curr_unique && count_k == curr_unique)
                    ans = max(ans, end - start);
            }
        }
        return ans;
    }
};