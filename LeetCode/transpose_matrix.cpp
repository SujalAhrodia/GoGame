// first solution

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) 
    {
        int i=A.size();
        int j=A[0].size();
        
        vector<vector<int>> ans(j);

        for(int x=0; x<j; x++)
        {
            ans[x] = vector<int> (i);
            for(int y=0; y<i; y++)
                ans[x][y] = A[y][x];
        }
        return ans;
    }
};


// optimized solution

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) 
    {
        int i=A.size();
        int j=A[0].size();
        
        vector<vector<int>> ans(j, vector<int> (i,0));
        
        for(int x=0; x<j; x++)
            for(int y=0; y<i; y++)
                ans[x][y] = A[y][x];
        return ans;
    }
};
