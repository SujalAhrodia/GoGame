// first solution

class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int m=nums[0],s=nums[0];
        
        for(int i=1; i<nums.size(); i++)
        {
            s = max(nums[i], s+nums[i]); 
            m = max(m,s);
        }   
        return m;
    }
};

// another solution

class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int max_so_far = INT_MIN, max_ending=0;
        
        for(int i=0; i<nums.size(); i++)
        {
            max_ending+= nums[i];
            
            if(max_so_far < max_ending)
                max_so_far = max_ending;
            if(max_ending < 0)
                max_ending = 0;
        }
        return max_so_far;
    }
};
