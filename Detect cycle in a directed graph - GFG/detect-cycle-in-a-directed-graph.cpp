// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    bool checkCycleDFS_directed(vector<int> graph[], vector<bool> &visited, vector<bool> &DFSvisited, int n, int current)
    {
    	visited[current]=true;
    	DFSvisited[current]=true;
    	for(auto it: graph[current])
    	{
    		if(!visited[it])
    		{
    			if(checkCycleDFS_directed(graph, visited, DFSvisited, n, it))
    				return true;
    		}
    		else if(DFSvisited[it] && visited[it])
    		{
    			return true;
    		}
    	}
    	DFSvisited[current]=false;
    	return false;
    }
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        int n=V;
        vector<bool> visited(n+1,false);
		vector<bool> DFSvisited(n+1,false);
		for(int i=0;i<n;i++)
		{
			if(!visited[i])
			{
				if(checkCycleDFS_directed(adj, visited, DFSvisited, n, i))
				{
				// 	cout<<"Yes"<<endl;
				// 	flag=1;
				// 	break;
				    return true;
				}
			}
		}
		return false;
    }
};

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}
  // } Driver Code Ends