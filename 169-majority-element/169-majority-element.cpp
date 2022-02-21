class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> umap;
        for(auto it: nums)
            umap[it]+=1;
        
        //int len=nums.size()/2;
        for(auto it: umap)
        {
            if(2*it.second> nums.size())
                return it.first;
        }
        return 0;
    }
};