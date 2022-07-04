class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int> ans;
        map<int, int> umap;
        for(int i=0;i<n;i++)
            umap[i]=0;
        for(auto it: edges)
        {
            umap[it[1]]++;
        }
        for(auto it: umap)
        {
            if(it.second==0)
                ans.push_back(it.first);
        }
        return ans;
    }
};