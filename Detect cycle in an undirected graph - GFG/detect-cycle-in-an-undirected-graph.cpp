// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
  bool checkCycle(vector<int> graph[], vector<bool> &visited, int n, int current)
    {
    	queue<pair<int, int>> q;
    	q.push({current,-1});
    	visited[current]=true;
    	while(!q.empty())
    	{
    		int curr= q.front().first;
    		int parent= q.front().second;
    		q.pop();
    		for(auto it: graph[curr])
    		{
    		    
    		  if(!visited[it])
        			{
        				q.push({it, curr});
        				visited[it]=true;
        			}
        			else if(parent!=it)
        			{
        				return true;
        			}
    		    
        			
    		}
    	}
    	return false;
    }
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        // vector<int> graph(V);
        // for(int i=0;i<adj.size();i++)
        // {
        //     for(auto it: adj[i])
        //     {
        //         graph[adj]
        //     }
        // }
        int n=V;
        vector<bool> visited(V, false);
        for(int i=0;i<n;i++)
		{
			if(!visited[i])
			{
				if(checkCycle(adj, visited, V, i))
				{
    				// 	cout<<"Yes"<<endl;
    				// 	flag=1;
    				// 	break;
				    return true;
				}
			}
		}
// 		if(!flag)
// 			cout<<"No"<<endl;
        return false;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}  // } Driver Code Ends