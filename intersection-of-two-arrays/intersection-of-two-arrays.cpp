class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> out;
        map<int, int> umap;
        for(int i=0;i<nums2.size();i++)
        {
            umap[nums2[i]]=i;
        }
        map<int, int> check;
        for(int i=0;i<nums1.size();i++)
        {
            if(umap.find(nums1[i])!=umap.end() && check[nums1[i]]==0)
            {
                check[nums1[i]]=1;
                out.push_back(nums1[i]);
            }
        }
        return out;
        
        
    }
};