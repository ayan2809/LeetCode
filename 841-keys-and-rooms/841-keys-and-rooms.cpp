class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<vector<int>> graph(n);
        for(int i=0;i<n;i++)
        {
            for(auto itr: rooms[i])
            {
                graph[i].push_back(itr);
            }
        }
        vector<bool> visited(n, false);
        queue<int> q;
        q.push(0);
        visited[0]=true;
        while(!q.empty())
        {
            int current= q.front();
            q.pop();
            for(auto it:graph[current])
            {
                if(!visited[it])
                {
                    q.push(it);
                    visited[it]=true;
                }
            }
        }
        for(auto it: visited)
        {
            if(it==false)
                return false;
        }
        return true;
    }
};