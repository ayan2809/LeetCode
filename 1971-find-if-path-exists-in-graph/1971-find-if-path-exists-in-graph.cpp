class Solution {
public:
    bool hasPath(vector<vector<int>>edges, int n, int source, vector<bool> &visited, int destination)
    {
        if(source==destination)
            return true;
        if(visited[source])
            return false;
         visited[source]=1;
        // if()
        for(int i=0;i<edges[source].size();i++)
        {
            // if(edges[source][i])
                if(hasPath(edges, n, edges[source][i], visited, destination))
                {
                    return true;
                }
            // }
        }
        return false;
    }
    bool bfsPathChecker(int n, vector<vector<int>>& graph, int start, int end)
    {
        queue<int> q;
        vector<int> visited(n, 0);
        q.push(start);
        visited[start] = 1;
        while(!q.empty()){
            int top = q.front();
            q.pop();
            if(top == end)
                return true;

            for(int i=0; i<graph[top].size(); i++){
                if(visited[graph[top][i]] == 0){
                    q.push(graph[top][i]);
                    visited[graph[top][i]] = 1;
                }
            }
        }
        return false;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        // int **edge= new int*[n];
        // for(int i=0;i<n;i++)
        // {
        //     edge[i]=new int[n];
        //     for(int j=0;j<n;j++)
        //     {
        //         edge[i][j]=0;
        //     }
        // }
        vector<vector<int>> edge(n);
        for(auto it: edges)
        {
            
            // edge[it[0]][it[1]]=1;
            // edge[it[1]][it[0]]=1;   
            edge[it[0]].push_back(it[1]);
            edge[it[1]].push_back(it[0]);
        }
        // bool *visited=new bool[n];
        // for(int i=0;i<n;i++)
        // {
        //     visited[i]=false;
        // }
        vector<bool> visited(n, false);
        // return hasPath(edge, n, source, visited, destination);
        return bfsPathChecker(n, edge, source, destination);
    }
};