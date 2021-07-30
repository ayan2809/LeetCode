class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> umap;
        for(int i=0;i<nums.size();i++)
        {   
            if(umap[nums[i]]>=1)
                return true;
            umap[nums[i]]+=1;
        }
        return false;
    }
};