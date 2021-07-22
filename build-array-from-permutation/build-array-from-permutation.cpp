class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        map<int,int> umap;
        for(int i=0;i<nums.size();i++)
        {
            umap[i]=nums[i];
        }
        vector<int> output;
        for(int i=0;i<nums.size();i++)
        {
            output.push_back(umap[nums[i]]);
        }
        return output;
    }
};