// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
  void dfs(vector<int> adj[], int n, vector<bool> &visited, int cv, vector<int> &ans)
    {
        // if(cv==n)
        // return;
        // cout<<cv<<" ";
        ans.push_back(cv);
        visited[cv]=true;
        for(auto it: adj[cv])
        {
            
            if(!visited[it])
                dfs(adj, n, visited, it, ans);
            
        }
    }
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<bool> visited(V, false);
        // int **graph= new int[V];
        // for(int i=0;i<)
        vector<int> ans;
        dfs(adj, V, visited, 0, ans);
        
        return ans;
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
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends