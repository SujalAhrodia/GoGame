class Solution {
public:
    bool divisorGame(int N) 
    {
        int dp[N+1]={0};
        
        for(int i=2; i<=N; i++)
            for(int j=1; pow(j,2)<=i; j++)
                if(i%j==0 && dp[i-j]==0) 
                    dp[i]=1;
        return dp[N];
        
    }
};
