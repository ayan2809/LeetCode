class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> out;
        map<int, int> umap;
        map<int, int> umap2;
        for(int i=0;i<nums2.size();i++)
        {
            umap[nums2[i]]+=1;
        }
        for(int i=0;i<nums1.size();i++)
        {
            umap2[nums1[i]]+=1;
        }
        for(auto it: umap)
        {
            umap[it.first]=min(umap[it.first],umap2[it.first]);
        }
        map<int, int> check;
        for(int i=0;i<nums1.size();i++)
        {
            if(umap.find(nums1[i])!=umap.end() && check[nums1[i]]==0)
            {
                check[nums1[i]]=1;
                for(int j=0;j<umap[nums1[i]];j++)
                out.push_back(nums1[i]);
            }
        }
        return out;
    }
};