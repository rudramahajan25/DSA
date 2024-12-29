class Solution {
public:
    string removeDuplicates(string s) {
        string temp;
        int index;
        char count1[26]={};
        int i=0;
        while(i<s.length())
        {
            index = s[i]-'a';
            count1[index]++;
            if(count1[index]>1 && s[i] == s[i-1])
            {   
                s.erase(i-1,2);
                i=i-1;    
                           
            }
            else
            i++;
        }
        return s;
       
    }
};