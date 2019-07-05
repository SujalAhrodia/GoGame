// first solution

class Solution {
public:
    vector<string> table{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    
    int uniqueMorseRepresentations(vector<string>& words) 
    {
        vector<string> temp;
        vector<string>::iterator itr;
        
        for(string str : words)
        {
            string temp1 = "";
            for(char ch : str)
                temp1+= table[ch-'a'];
            temp.push_back(temp1);
        }
        //removing duplicates 
        sort(temp.begin(), temp.end());
        itr = unique(temp.begin(), temp.end());
        temp.erase(itr, temp.end());

        return temp.size();       
    }
};

// short solution
class Solution {
public:
    vector<string> table{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    
    int uniqueMorseRepresentations(vector<string>& words) 
    {
        vector<string> temp;
        unordered_set<string> ans;
        
        for(string str : words)
        {
            string temp1 = "";
            for(char ch : str)
                temp1+= table[ch-'a'];
            ans.insert(temp1);
        }
        return ans.size();       
    }
};
