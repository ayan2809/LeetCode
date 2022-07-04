class Solution {
public:
    void dfs_check(vector<vector<int>> graph, vector<bool> &visited, int sv)
    {
        visited[sv]=true;
        for(auto it: graph[sv])
        {
            if(!visited[it])
            {
                dfs_check(graph, visited, it);
            }
        }
    }
    void bfs_check(int n,vector<vector<int>> graph, vector<bool>& visited, int sv)
    {
        // vector<bool> visited(n,false);
        queue<int> q;
        q.push(sv);
        visited[sv]=true;
        while(!q.empty())
        {
            int current= q.front();
            for(int i=0;i<graph[current].size();i++)
            // for(auto it: graph[current])
            {
                if(!visited[graph[current][i]])
                {
                    q.push(graph[current][i]);
                    visited[graph[current][i]]= true;
                }
            }
            q.pop();
        }
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        if(connections.size()<n-1)
            return -1;
        vector<vector<int>> graph(n);
        for(auto it: connections)
        {
            graph[it[0]].push_back(it[1]);
            graph[it[1]].push_back(it[0]);
        }
        vector<bool> visited(n,false);
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(!visited[i])
            {
                ans++;
                // bfs_check(n, graph,visited, i);
                queue<int>q;
                q.push(i);
                visited[i]=true;
                while(!q.empty())
                {
                    int current= q.front();
                    q.pop();
                    for(auto it: graph[current])
                    {
                        if(!visited[it])
                        {
                            q.push(it);
                            visited[it]=true;
                        }
                    }
                }
                
            }
        }
        return ans-1;
    }
};