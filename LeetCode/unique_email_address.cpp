class Solution {
public:
    int numUniqueEmails(vector<string>& emails) 
    {
        vector<string> dup;
        
        for(int i=0; i<emails.size(); i++)
        {
            //split 
            string local = emails[i].substr(0, emails[i].find("@"));
            string domain = emails[i].substr(emails[i].find("@")+1, emails[i].length());
            
            //remove periods
            local.erase(remove(local.begin(), local.end(), '.'), local.end());
            
            //remove anything after plus signs
            local = local.substr(0, local.find("+"));
            
            //concatenate
            string temp = local+"@"+domain;
            
            dup.push_back(temp);
            // cout<<temp<<endl;
        }
        
        //check for duplicates
        sort(dup.begin(), dup.end());
        dup.erase( unique( dup.begin(), dup.end() ), dup.end() );
        
        return dup.size();
    }
};
