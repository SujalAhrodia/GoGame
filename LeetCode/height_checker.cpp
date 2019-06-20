class Solution {
public:
    int heightChecker(vector<int>& heights) 
    {
        int ans=0;
        vector<int> dup=heights;
        
        sort(dup.begin(), dup.end());
        
        for(int i=0; i<dup.size(); i++)
        {
            if(dup[i]!=heights[i])
                ans++;
        }
        return ans;
    }
};
