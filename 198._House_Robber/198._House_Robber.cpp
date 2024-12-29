class Solution {
public:
    int rob(vector<int>& nums) {
        int prev = 0,prev2 =0,cur =0;
        for(auto i:nums)
        {
            cur = max(prev,i+prev2);
            prev2 = prev;
            prev = cur;
        }
        return cur;
    }
};