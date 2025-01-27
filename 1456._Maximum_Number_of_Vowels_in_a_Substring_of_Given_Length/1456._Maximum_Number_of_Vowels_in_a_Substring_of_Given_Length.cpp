class Solution {
public:
    int maxVowels(string s, int k) {
        string vow = "aeiou";
        int n = s.size();
        int maxi = 0;
        int cnt = 0;
    
       
        for(int i = 0;i<k;i++)
        {
            if(vow.find(s[i]) != string::npos){
                cnt++;
            }
        }
        maxi =cnt;
        for(int i = k;i<n;i++)
        {
            if(vow.find(s[i]) != string::npos){
                cnt++;
            }
            if(vow.find(s[i-k]) != string::npos){
                cnt--;
            }
            maxi = max(maxi,cnt);
        }
        return maxi;
    }
};