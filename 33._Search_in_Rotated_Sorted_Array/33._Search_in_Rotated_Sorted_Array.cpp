/*
There is an integer array nums sorted in ascending order (with distinct values).

Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].

Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

You must write an algorithm with O(log n) runtime complexity.

 

Example 1:

Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4
Example 2:

Input: nums = [4,5,6,7,0,1,2], target = 3
Output: -1
Example 3:

Input: nums = [1], target = 0
Output: -1
 

Constraints:

1 <= nums.length <= 5000
-104 <= nums[i] <= 104
All values of nums are unique.
nums is an ascending array that is possibly rotated.
-104 <= target <= 104
*/

//1.
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int ans1=-1;
        int l1=0,n1=nums.size()-1,m1;
        int h1=n1;
        while(l1<=h1)
        {
           m1=(l1+h1)/2;
           if(nums[m1]==target)
           {
               ans1=m1;
               break;
           }
           if(nums[m1]==nums[l1] && nums[m1]==nums[h1])
           {l1++,h1--;
           continue;}

           else if(nums[m1]>target)
           {if(nums[h1]>nums[m1] || nums[h1]<target)
            h1=m1-1;
            else
            l1=m1+1;
           }
           else if(nums[m1]<target)
           {
             if(nums[h1]<nums[m1]|| (nums[h1]>=target))
            l1=m1+1;
            else
            h1=m1-1;
           }
        }
        return ans1;
    }
};

//2
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l =0,r = nums.size()-1;
        while(l<=r){
            int mid = (l+r)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            if(nums[l]<= nums[mid])
            {
                if(nums[l]<= target && target<nums[mid])
                {
                    r = mid-1;
                }
                else
                {
                    l = mid+1;
                }        
            }
            else{
                if(nums[mid]< target && target<=nums[r])
                l  = mid+1;
                else
                r = mid-1;
            }
        }
     return -1;

    }
};