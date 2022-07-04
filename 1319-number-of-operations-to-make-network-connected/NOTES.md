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