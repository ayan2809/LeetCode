class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char, int> umap;
        for(auto it: s)
        {
            umap[it]+=1;
        }
        for(auto it: t)
        {
            if(umap[it]>0)
            umap[it]-=1;
        }
        int x=0;
        for(auto it: umap)
        {
            x+=it.second;
        }
        return x;
        
    }
};