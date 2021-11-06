class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        map<int, int> umap;
        for(auto it: nums)
        {
            umap[it]+=1;
        }
        vector<int> ans;
        for(auto it: umap)
        {
            if(it.second==1)
                ans.push_back(it.first);
        }
        return ans;
    }
};