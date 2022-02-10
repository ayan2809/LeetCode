class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> umap;
        unordered_map<int,int> umap2;
        for(auto it: arr)
        {
            umap[it]+=1;
        }
        int maxi=0;
        int x=0;
        for(auto it: umap)
        {
            umap2[it.second]+=1;
            
        }
        for(auto it: umap2)
        {
            if(it.second>=2)
            {
                return false;
            }
        }
            return true;
        
    }
};