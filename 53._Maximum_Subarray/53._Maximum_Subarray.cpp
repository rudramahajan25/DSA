class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curmax = 0,maxtill = INT_MIN;
        for(auto c:nums)
        {
        curmax = max(c,curmax+c);
        maxtill = max(maxtill,curmax);
        }
        return maxtill;
    }
};