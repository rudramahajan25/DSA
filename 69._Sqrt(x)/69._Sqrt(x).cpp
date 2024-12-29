class Solution {
public:
    int mySqrt(int x) {
       int s = 0;
       int n = x;
       long long int mid = s+(n-s)/2;
       
       int ans = -1;
       while(s<=n)
       {
        long long int sq = mid*mid;
        if(sq == x)
        return mid;
        else if (sq<x)
        {
            ans = mid;
            s = mid + 1;
        }
        else {
        n = mid - 1;
        }
        mid = s+(n-s)/2;
       } 
       return ans;
    }
};