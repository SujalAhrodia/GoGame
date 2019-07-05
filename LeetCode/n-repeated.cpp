class Solution {
public:
    int repeatedNTimes(vector<int>& A) 
    {
        unordered_set<int> map;        
        
        for(int i=0; i<A.size(); i++)
        {
            if(map.count(A[i])==1)
                return A[i];
            map.insert(A[i]);
        }
        return 0;
    }
};
