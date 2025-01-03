/*
Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

Notice that the solution set must not contain duplicate triplets.

 

Example 1:

Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]
Explanation: 
nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
The distinct triplets are [-1,0,1] and [-1,-1,2].
Notice that the order of the output and the order of the triplets does not matter.
Example 2:

Input: nums = [0,1,1]
Output: []
Explanation: The only possible triplet does not sum up to 0.
Example 3:

Input: nums = [0,0,0]
Output: [[0,0,0]]
Explanation: The only possible triplet sums up to 0.
 

Constraints:

3 <= nums.length <= 3000
-105 <= nums[i] <= 105
*/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()<3 || nums[0]>0)
            return{};
        vector<vector<int>> ans;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
            {
                break;
            }
            if(i>0 && nums[i]==nums[i-1])
            {
                continue;
            }
            int low = i+1,high =nums.size()-1;
            int sum = 0;
            while(low<high)
            {
                sum = nums[i]+nums[low]+nums[high];
                if(sum > 0){  
                    high--;
                } 
                else if(sum < 0){ 
                    low++;
                } 
                else {
                    ans.push_back({nums[i] , nums[low] , nums[high]}); 
                    int last_low_occurence = nums[low] , last_high_occurence = nums[high];  
                    while(low < high && nums[low] == last_low_occurence){
                        low++;
                    }
                    while(low < high && nums[high] == last_high_occurence){
                        high--;
                    }
                }   
            }
        }
        return ans;
    }
};