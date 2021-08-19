class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> umap;
        for(int i=0;i<nums.size();i++)
        {
            int x=target-nums[i];
            if(umap.find(x)!=umap.end())
                return {umap[x],i};
            umap[nums[i]]=i;
        }
        return {};
    }
};