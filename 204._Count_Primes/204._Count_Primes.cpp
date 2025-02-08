class Solution {
public:
    int countPrimes(int n) {
        if(n <= 1) return 0;
        vector<bool> primes(n+1,true);
        primes[0] = primes[1] = false;
        for(int i =2; i*i<=n;i++)
        if(primes[i])
        {
            for(int j = 2; i*j <= n; j++)
             primes[i*j] = false;
        }
        int ans = 0;
        for(int i = 2; i<n;i++)
        {
            if(primes[i])
                ans++;
        }
        return ans;
    }
};
class Solution {
public:
    int countPrimes(int n) {
        int cnt = 0;
        vector<bool> prime(n+1,true);
        prime[0] = prime[1] = false;
        for(int i = 2;i<n;i++)
        {
            if(prime[i])
            {
                cnt++;
            
            for(int j = 2*i;j<n;j=j+i)
            {
            prime[j]=0;
            }
        }
        }
        return cnt;
    }
};