class Solution {
public:
    int myAtoi(string s) {
        int n = s.size();
        long res = 0;
        int sign=1;
        int i = 0;
        while(i<n && s[i]==' ')
            i++;

        if(s[i]=='-')
        {
            sign = -1;
            i++;
        }
        else if(s[i]=='+')
        {
            i++;
        }
        
        while(i<n)
        {
            if(s[i]>='0' && s[i]<='9')
            {
                res = res*10+(s[i]-'0');
                if(res>INT_MAX && sign == -1)
                {
                    return INT_MIN;
                }
                else if(res>INT_MAX && sign == 1)
                {
                    return INT_MAX;
                }
                i++;
            }
            else
            {
                return res*sign;
            }
        }
        return (res*sign);
    }
};