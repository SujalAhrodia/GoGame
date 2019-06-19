// first solution

class Solution {
public:
    string toLowerCase(string str) 
    {
        string result="";
        for(int i=0; i<str.length(); i++)
            result+=char(tolower(str[i]));
        return result;
    }
};

//quicker solution

class Solution {
public:
    string toLowerCase(string str) 
    {
        string result="";
        for(char ch : str)
            result+=char(tolower(ch));
        return result;
    }
};

