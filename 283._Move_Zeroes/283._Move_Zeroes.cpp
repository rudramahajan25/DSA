/*
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

 

Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
Example 2:

Input: nums = [0]
Output: [0]
 

Constraints:

1 <= nums.length <= 10^4
-231 <= nums[i] <= 2^31 - 1
*/
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int l=0,r=0;
        while (r < nums.size()) {
            if (nums[r] != 0) {
                swap(nums[l], nums[r]);
                l++;
                }
            
            r++;
        }
                       
    }
};