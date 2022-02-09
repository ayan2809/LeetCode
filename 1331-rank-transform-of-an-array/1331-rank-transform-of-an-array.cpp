class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        map<int, int> umap;
        for(auto it: arr)
        {
            umap[it]+=1;
        }
        int k=1;
        for(auto it: umap)
        {
            umap[it.first]=k++;
        }
        vector<int> ans;
        for(auto it:arr)
        {
            ans.push_back(umap[it]);
        }
        return ans;
    }
};