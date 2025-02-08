/*
Given an integer array nums of unique elements, return all possible 
subsets
 (the power set).

The solution set must not contain duplicate subsets. Return the solution in any order.

 

Example 1:

Input: nums = [1,2,3]
Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]
Example 2:

Input: nums = [0]
Output: [[],[0]]
 

Constraints:

1 <= nums.length <= 10
-10 <= nums[i] <= 10
All the numbers of nums are unique.
*/
class Solution {
private:
void subsets(vector<int> nums,int i,vector<int>& temp,vector<vector<int>>& ans)
{
        ans.push_back(temp);
        for (int j = i; j < nums.size(); j++) {
            temp.push_back(nums[j]);
            subsets(nums, j + 1, temp, ans);
            temp.pop_back();
        }
}
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        subsets(nums,0,temp,ans);
        return ans;
    }
};
class Solution {
private:
void solve(vector<int>& nums, vector<int> output, int index, vector<vector<int>>& ans)
{
    if(index>=nums.size())
    {
        ans.push_back(output);
        return ;
    }

    solve(nums,output,index+1,ans);

    int element = nums[index];
    output.push_back(element);
    solve(nums,output,index+1,ans);
}

public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        int index = 0;
        solve(nums,output,index,ans);
        return ans;
    }
};