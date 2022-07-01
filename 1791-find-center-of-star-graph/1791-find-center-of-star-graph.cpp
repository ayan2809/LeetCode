class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        map<int, int> umap;
        for(auto it: edges)
        {
            umap[it[0]]++;
            umap[it[1]]++;
        }
        int maxi=-1, ans=1;
        for(auto it: umap)
        {
            if(it.second>maxi)
            {
                ans=it.first;
                maxi=it.second;
            }
        }
        return ans;
    }
};