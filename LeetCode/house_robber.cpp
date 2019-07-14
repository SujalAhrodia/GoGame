// first solution

class Solution {
public:
    int rob(vector<int>& nums) 
    {
        int sum1=0, sum2=0;
        
        for(int i=0; i<nums.size(); i++)
        {
            if(i%2==0)
                sum1= max(sum1+nums[i], sum2);
            else
                sum2=max(sum1, sum2+nums[i]);
        }
        return max(sum1,sum2);
    }
};


// dp solution

class Solution {
public:
    int rob(vector<int>& nums) 
    {
        int N=nums.size();
        if(N==0)
            return 0;
        int dp[N+1];
        
        dp[0]=0; dp[1]=nums[0];
        
        for(int i=2; i<=N; i++)
            dp[i] = max(dp[i-2] + nums[i-1], dp[i-1]);
        return dp[N];
    }
};
