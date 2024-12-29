class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>result;
        int left = binarySearch(nums,target,true);
        int right = binarySearch(nums,target,false);
        result.push_back(left);
        result.push_back(right);
        return result;
    }
    int binarySearch(vector<int>& nums,int target,bool isleft)
    {
        int start = 0;
        int end = nums.size()-1;
        int idx = -1;
        while(start<=end)
        {
            int mid = start+(end-start)/2;
            if (nums[mid] > target) {
                end = mid - 1;
            } else if (nums[mid] < target) {
                start = mid + 1;
            } else {
                idx = mid;
            if (isleft) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
            }
        }
        return idx;
        
    }
};