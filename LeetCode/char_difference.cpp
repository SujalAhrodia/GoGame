// first solution
class Solution {
public:
    char findTheDifference(string s, string t) 
    {
        char ans;
        int count[26]= {0};
            
        for(char i:s)
            count[i-'a']++;

        for(char i:t)
        {
            if(count[i-'a']==0)
            {
                ans=i;
                break;
            }
            count[i-'a']--;
        }
        return ans;
    }
};

// bit-wise solution

class Solution {
public:
    char findTheDifference(string s, string t) 
    {
        char ans=0;
        for(char i:s)
            ans^=i;
        for(char i:t)
            ans^=i;
        return ans;
    }
};
