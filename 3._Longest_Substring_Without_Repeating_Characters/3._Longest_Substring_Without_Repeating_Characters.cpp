/*
Given a string s, find the length of the longest 
substring
 without repeating characters.

 

Example 1:

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.
Example 2:

Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.
Example 3:

Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
 

Constraints:

0 <= s.length <= 5 * 104
s consists of English letters, digits, symbols and spaces.
*/
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int l = 0, r = 0, maxLen = 0;
        unordered_set<char> charSet;

        while (r < n) {
            if (charSet.find(s[r]) == charSet.end()) {
                charSet.insert(s[r]);
                maxLen = max(maxLen, r - l + 1);
                r++;
            } else {
                charSet.erase(s[l]);
                l++;
            }
        }

        return maxLen;
    }
};