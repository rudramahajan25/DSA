class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxi=INT_MIN;
        int sum;
        vector<int> arr(gain.size()+1);
        arr[0] = 0;
        for(int i = 0;i<gain.size();i++)
        {
                   arr[i+1] += arr[i] + gain[i];
        }
        for(int i = 0;i<arr.size();i++)
        {
            maxi = max(maxi,arr[i]);
        }
        return maxi;
    }
};