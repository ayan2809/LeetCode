class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int> umap;
        for(int i=0;i<nums.size();i++)
        {
            umap[nums[i]]+=1;
        }
        for(auto it:umap)
        {
            if(it.second>1)
            {
                return it.first;
            }
        }
        return 0;
    }
};