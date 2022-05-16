class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        map<int, int> umap;
        map<int, int> umap2;
        for(auto it: nums2)
        {
            umap2[it]=2;
        }
        for(int i=0;i<nums1.size();i++)
        {
            umap[nums1[i]]=i;
        }
        vector<vector<int>> ans;
        vector<int> x2;
        for(auto it: umap2)
        {
            // umap2[nums2[i]]=i;
            if(umap.find(it.first)==umap.end())
                x2.push_back(it.first);
        }
        vector<int> x1;
        for(auto it: umap)
        {
            if(umap2.find(it.first)==umap2.end())
                x1.push_back(it.first);
        }
        // for(int i=0;i<nums1.size();i++)
        // {
        //     if(umap2.find(nums1[i])==umap2.end())
        //         x1.push_back(nums1[i]);
        // }
        ans.push_back(x1);
        ans.push_back(x2);
        return ans;
    }
};