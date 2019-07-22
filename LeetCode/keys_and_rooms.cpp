// first solution

class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms)
    {
        int N=rooms.size();
        vector<int> visited(N, false);
        
        queue<int> q;
        q.push(0);
        
        while(!q.empty())
        {
            for(int i=0; i<q.size(); i++)
            {
                int itr = q.front();
                q.pop();
                visited[itr] = true;
                
                for(int j : rooms[itr])
                    if(!visited[j])
                        q.push(j);
            }
        }
        for(int i :visited)
            if(i==false)
                return false;
        return true;
    }
};

// optimized solution

class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms)
    {
        int N=rooms.size();
        vector<int> visited(N, false);
        
        queue<int> q;
        q.push(0);
        
        while(!q.empty())
        {
            for(int i=0; i<q.size(); i++)
            {
                int itr = q.front();
                q.pop();
                visited[itr] = true;
                
                for(int j : rooms[itr])
                    if(!visited[j])
                        q.push(j);
            }
        }
        //effficient way to count occurence
        return count( visited.begin(), visited.end(), true ) == rooms.size();
    }
};
