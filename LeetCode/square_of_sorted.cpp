//first solution

class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) 
    {
        for(int i=0; i<A.size(); i++)
        {
            A[i]*=A[i];
        }
        sort(A.begin(), A.end());
        return A;
    }
};

//optimized version

class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) 
    {
        vector<int> result(A.size(), 0);
        
        int i=0, j=A.size()-1;
        
        for(int k=A.size()-1; k>=0; k--)
        {
            if(abs(A[i]) > abs(A[j]))
                result[k]=pow(A[i++],2);
            else
                result[k]=pow(A[j--],2); 
        }
        return result;
    }
};
