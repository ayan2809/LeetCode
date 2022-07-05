// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
  void bfs(vector<int> adj[], int cv, int V, vector<bool> visited, vector<int> &ans)
  {
      queue<int> q;
      q.push(cv);
      
      visited[cv]=true;
      while(!q.empty())
      {
          int current= q.front();
          ans.push_back(current);
          q.pop();
          for(auto it: adj[current])
          {
              if(!visited[it])
              {
                  q.push(it);
                  visited[it]=true;
              }
          }
      }
      
  }
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<bool> visited(V, false);
        vector<int> ans;
        bfs(adj, 0, V, visited, ans);
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends