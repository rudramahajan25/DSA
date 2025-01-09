class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double maxavg = 0.0;
        double maxsum = 0.0;
        for(int i = 0;i<k;i++)
        {
            maxavg += nums[i];
        }
        double maxi = maxavg;
        for(int i = k;i<n;i++)
        {
            maxi += nums[i] - nums[i-k]; 
            maxavg = max(maxavg,maxi); 
        }
        return maxavg/k;
    }
};