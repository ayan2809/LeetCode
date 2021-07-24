class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char,int> umap;
        for(int i=0;i<s.length();i++)
        {
            umap[s[i]]+=1;
        }
        int maxi=umap[s[0]];
        int f=0;
        for(auto it: umap)
        {
            if(it.second==maxi)
                f++;
        }
        if(f==umap.size())
            return true;
        
        return false;
        
    }
};