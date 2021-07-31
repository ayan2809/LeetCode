class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int, int> umap;
        map<int, int> umap2;
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            if(umap2[nums[i]]!=0)
            {
                if(abs((i+1)-umap2[nums[i]])<=k)
                    return true;
            }
            umap2[nums[i]]=max(i+1, umap2[nums[i]]);
        }
        //if(ans<)
                                            
        return false;
    }
};