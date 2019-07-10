class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) 
    {
        int N=cost.size();
        int dp[N+1];
        
        dp[0]=dp[1]=0;
        
        for(int i=2; i<=N; i++)
            dp[i] = min((dp[i-1]+cost[i-1]),(dp[i-2]+cost[i-2]));    
        return dp[N];
    }
};
