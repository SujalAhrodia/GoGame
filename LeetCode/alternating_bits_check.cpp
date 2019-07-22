// solution

/*

XOR number by the half of it.
then check if there are any 0s after the leading 1.
if yes, false
else, true

*/

class Solution {
public:
    bool hasAlternatingBits(long int n) 
    {
        n^=n>>1;
        return !(n & n+1);
    }
};
