// first solution (passed only 32/35 test cases, TLE)

class Solution {
public:
    int bulbSwitch(int n) 
    {
        int ans=0;
        vector<int> temp(n+1,0);
        
        for(int i=1; i<=n; i++)
        {
            for(int j=i; j<=n; j+=i)
                temp[j]^=1;
        }
        for(int i=1; i<=n; i++)
        {
            if(temp[i]==1)
                ans++;
        }
        return ans;
    }
};

// accepted solution

/*

Logic: A bulb will be 'ON' only if the number of its factors is odd. Otherwise it will be 'OFF'. 
So, we only need to find the perfect squares smaller than 'n'.

Reason: Since the bulb will be toggled only on it's factors. Only perfect squares will have odd number of factors!

*/

class Solution {
public:
    int bulbSwitch(int n) 
    {
        int ans=0;
        
        for(int i=1; i<=sqrt(n); i++)
            ans++;
        return ans;
    }
};
