class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) 
    {
        map<int, int> umap;
        for(auto it: nums1)
        {
            umap[it]+=1;
        }
        set<int> ans;
        for(auto it: nums2)
        {
            //umap[it]+=1;
            if(umap.find(it)!=umap.end())
                ans.insert(it);
        }
        for(auto it: nums2)
        {
            umap[it]+=1;
        }
        for(auto it: nums3)
        {
            if(umap.find(it)!=umap.end())
                ans.insert(it);
        }
        vector<int> out;
        for(auto it: ans)
        {
            out.push_back(it);
        }
        return out;
    }
};