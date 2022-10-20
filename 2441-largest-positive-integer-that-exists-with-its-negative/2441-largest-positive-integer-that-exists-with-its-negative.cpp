class Solution {
public:
    int findMaxK(vector<int>& nums) {
        map<int, int> umap;
        for(auto it : nums)
        {
            umap[it]++;
        }
        int maxi=0,ans=-1;
        for(auto it: nums)
        {
            if(it>=maxi && it!=0 && umap[-it]>0)
            {
                ans=it;
                maxi=it;
            }
        }
        return ans;
    }
};