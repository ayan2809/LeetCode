class Solution {
public:
    int target;
    vector<vector<int>> ans;
    vector<int> a;
    void dfs(vector<vector<int>> graph, int current=0)
    {
        a.push_back(current);
        if(current==target)
        {
            ans.push_back(a);
        }
        for(auto it: graph[current])
        {
            dfs(graph, it);
        }
        a.pop_back();
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        target=graph.size()-1;
        dfs(graph);
        return ans;
    }
};