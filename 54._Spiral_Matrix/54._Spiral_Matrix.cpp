class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>temp;
        int row = matrix.size();
        int col = matrix[0].size();
        int count = 0;
        int total = row*col;
        int startR = 0;
        int startC = 0;
        int endingR = row-1;
        int endingC = col -1;
        while(count<total)
        {
            for(int ind = startC;count<total && ind<=endingC;ind++)
            {
                temp.push_back(matrix[startR][ind]);
                count++;
            }
            startR++;
            for(int ind = startR;count<total && ind<=endingR;ind++)
            {
                temp.push_back(matrix[ind][endingC]);
                count++;
            }
            endingC--;    
            for(int ind = endingC;count<total && ind>=startC;ind--)
            {
                temp.push_back(matrix[endingR][ind]);
                count++;
            }
            endingR--;   
            for(int ind = endingR;count<total && ind>=startR;ind--)
            {
                temp.push_back(matrix[ind][startC]);
                count++;
            }
            startC++;
        } 
        return temp;
    }
};