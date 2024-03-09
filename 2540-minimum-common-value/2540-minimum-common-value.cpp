class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        map<int, int>umap;
        for(auto it: nums1){
        umap[it]++;}
        for(auto it: nums2)
        {
            if(umap[it]>=1)
                return it;
        }
        return -1;
    }
};