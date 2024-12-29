class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
         unordered_map<int,int> count;
        int maxFreq = 0;
        int maxAns = 0;
        int n = nums.size();
        for(int i = 0;i<n;i++)
        {
            count[nums[i]]++;
            maxFreq = max(maxFreq,count[nums[i]]);
        }  
        int frequencyOfMaxFrequency = 0;
        for (auto [num, frequency] : count) {
            if (frequency == maxFreq) {
                frequencyOfMaxFrequency++;
            }
        }
        return frequencyOfMaxFrequency * maxFreq;
    }
};