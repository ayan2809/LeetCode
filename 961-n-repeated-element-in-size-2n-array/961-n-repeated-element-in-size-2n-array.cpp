class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        map<int, int>umap;
        for(auto it: nums)
        {
            umap[it]+=1;
        }
        int x= nums.size()/2;
        for(auto it: umap)
        {
            if(it.second==x)
                return it.first;
        }
        return -1;
    }
};