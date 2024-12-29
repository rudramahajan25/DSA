class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int N = score.size();
        priority_queue<pair<int,int>>heap;
        for(int i = 0;i<N;i++)
        {
            heap.push({score[i],i});
        }
        vector<string>ans(N);
        int place = 1;
        while(!heap.empty()){
        int originalIndex = heap.top().second;
        heap.pop();
         if (place == 1) {
                ans[originalIndex] = "Gold Medal";
            } else if (place == 2) {
                ans[originalIndex] = "Silver Medal";
            } else if (place == 3) {
                ans[originalIndex] = "Bronze Medal";
            } else {
                ans[originalIndex] = to_string(place);
            }
            place++;
        }
        return ans;
    }
};