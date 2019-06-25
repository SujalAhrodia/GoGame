// first solution
class Solution {
public:
    void reverseString(vector<char>& s) 
    {
        int i=0, j=s.size()-1;
        
        while(i<j)
        {
            swap(s[i++], s[j--]);
        }
    }
};

//optimized solution
class Solution {
public:
    void reverseString(vector<char>& s) 
    {
        int i=0, j=s.size()-1;
        if(!s.empty())
        {
            if((j+1)%2==0)
            {
                while(j>=i)
                {
                    char temp = s[i];
                    s[i]=s[j];
                    s[j]=temp;
                    i++; j--;
                }
            }
            else
            {
                while(i!=j)
                {
                    char temp = s[i];
                    s[i]=s[j];
                    s[j]=temp;
                    i++; j--;
                }    
            }
        }    
    }
};
