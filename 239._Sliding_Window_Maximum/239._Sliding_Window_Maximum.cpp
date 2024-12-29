class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int>q1(k);
        vector<int>ans;
        int n = nums.size();
        //addition;
        for(int i = 0;i<k;i++)
        {
             while(!q1.empty() && nums[q1.back()]<=nums[i])
                 q1.pop_back();
            q1.push_back(i);
        }
        ans.push_back(nums[q1.front()]);
        for(int i =k;i<n;i++)
        {
            //removal
            while(!q1.empty() && i - q1.front() >=k) {
            q1.pop_front();
            }
            //addition
            while(!q1.empty() && nums[q1.back()]<=nums[i])
                 q1.pop_back();
            q1.push_back(i);
            ans.push_back(nums[q1.front()]);

        }
        return ans;
    }
        
};