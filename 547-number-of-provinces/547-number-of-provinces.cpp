class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<vector<int>> graph(n);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i!=j && isConnected[i][j]==1)
                {
                    graph[i].push_back(j);
                    graph[j].push_back(i);
                }
            }
        }
        int ans=0;
        vector<bool> visited(n,false);
        for(int i=0;i<n;i++)
        {
            if(!visited[i])
            {
                ans++;
                queue<int> q;
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
        return ans;
    }
};