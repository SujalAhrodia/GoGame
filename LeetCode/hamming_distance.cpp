// first solution and optimized solution

class Solution {
public:
    int hammingDistance(int x, int y) 
    {
        int n=x^y, ans=0;
        
        while(n)
        {
            ans+= n&1;
            n>>=1;
        }
        return ans;
    }
};

// second solution
class Solution {
public:
    int hammingDistance(int x, int y) 
    {
        int n=x^y, ans=0;
        
        while(n)
        {
            ans++;
            n&=n-1;
        }
        return ans;
    }
};
