class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int n=nums.size();
        map<int, int> umap;
        for(auto it: nums)
            umap[it]++;
        
        for(auto it: umap)
        {
            if(it.second%2!=0)
                return false;
        }
        return true;
    }
};