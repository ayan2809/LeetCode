class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int, int> umap;
        for(auto it: arr)
        {
            umap[it]+=1;
        }
        int ans=-1;
        for(auto it: umap)
        {
            if(it.first==it.second)
            {
                ans=max(ans, it.first);
            }
        }
        return ans;
    }
};