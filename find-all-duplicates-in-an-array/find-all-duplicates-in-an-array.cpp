class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        unordered_set<int> umap;
        for(int i=0;i<nums.size();i++)
        {
            if(umap.find(nums[i])!=umap.end())
            {
                ans.push_back(nums[i]);
            }
            else
            {
                umap.insert(nums[i]);
            }
        }
        return ans;
    }
};