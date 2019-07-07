// first solution

class Solution {
public:
    int findComplement(int num) 
    {
        long temp =1;
        while(temp<=num)
            temp<<=1;
        return (temp-1)^num;        
    }
};

// optimized solution

class Solution {
public:
    int findComplement(int num) 
    {
        long long temp =1;
        while(temp<=num)
            temp<<=1;
        return (temp-1)^num;        
    }
};
