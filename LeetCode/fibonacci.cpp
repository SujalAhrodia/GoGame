//first solution

class Solution {
public:
    int fib(int N) 
    {
        if(N==0)
            return 0;
        else if(N==1)   
            return 1;
        else
            return fib(N-1)+fib(N-2);
    }
};


//optimized solution

class Solution {
public:
    int fib(int N) 
    {
        if(N<2)
            return N;

        int dp[N+1];
        dp[0]=0; dp[1]=1;
        
        for(int i=2; i<=N; i++)
            dp[i]=dp[i-1]+dp[i-2];
        return dp[N];            
    }
};
