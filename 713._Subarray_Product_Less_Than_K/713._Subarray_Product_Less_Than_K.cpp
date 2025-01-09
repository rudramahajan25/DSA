class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
          if (k <= 1) return 0;
        int n = nums.size();
        int ans = 0;
        int l = 0;
        int pro = 1;
        for(int r=0;r<n;r++)
        {
            pro *= nums[r];
            while(pro>=k)
            {
                pro/=nums[l];
                l++;
            }
            ans += r-l+1;
        }
        return ans;
    }
};