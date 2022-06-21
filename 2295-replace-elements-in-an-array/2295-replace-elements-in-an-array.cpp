class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {
        // for(auto it: operations)
        // {
        //     auto itr= find(nums.begin(), nums.end(), it[0]);
        //     // cout<<itr-nums.begin();
        //     if(itr!=nums.end())
        //     {
        //         nums[itr-nums.begin()]=it[1];
        //     }
        // }
        // return nums;
        unordered_map<int, int> umap;
        for(int i=0;i<nums.size();i++)
        {
            umap[nums[i]]=i;
        }
        for(auto it: operations)
        {
            int pos=umap[it[0]];
            umap[it[1]]=pos;
            nums[pos]=it[1];
        }
        return nums;
    }
};