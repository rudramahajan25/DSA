/*Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

 

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
*/
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string out ="";
        int n = strs.size();
        sort(strs.begin(),strs.end());
        string first = strs[0],last =strs[n-1];
        for(int i =0;i<min(first.size(),last.size());i++)
        {
            if(first[i]!=last[i]){
                return out;
            }
            out+=first[i];
        }
          return out;
    }
          
};