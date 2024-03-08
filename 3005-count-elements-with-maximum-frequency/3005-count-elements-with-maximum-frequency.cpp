class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int, int> umap;
        int maxi=0,ans=0;
        for(auto it: nums)
        {
            umap[it]++;
            if(umap[it]>maxi)
                maxi=umap[it];
        }
        for(auto it: umap)
        {
            if(it.second==maxi)
            ans+=it.second;
        }
        return ans;
    }
};