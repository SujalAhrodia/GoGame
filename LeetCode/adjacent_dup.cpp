//first solution

class Solution {
public:
    string removeDuplicates(string S) 
    {
        bool flag=true;
        
        while(flag)
        {
            flag=false;
            for(int i=0; i<S.length(); i++)
            {
                int t=i; 
                t=S.find(S[i],t+1);
                if(t==i+1)
                {
                    S.erase(i,t-i+1);
                    flag=true;
                    break;                        
                }
            }
        }
        return S;
    }
};

// optimized solution : stack

class Solution {
public:
    string removeDuplicates(string S) 
    {
        stack< char > st;
        string ans="";
        
        for(int i=0; i<S.length(); i++)
        {
            if(st.empty())
                st.push(S[i]);
            else if(st.top()==S[i])
                st.pop();
            else
                st.push(S[i]);
        }
        while(!st.empty())
        {
            ans = st.top()+ans;
            st.pop();
        }
        return ans;
    }
};
