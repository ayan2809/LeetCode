class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char,int> umap;
        map<char,int> umap2;
        for(int i=0;i<s.length();i++)
        {
            umap[s[i]]+=1;
            umap2[t[i]]+=1;
        }
        umap2[t[t.length()-1]]+=1;
        for(auto it:umap2)
        {
            if(it.second!=umap[it.first])
            {
                return it.first;
            }
        }
        return 0;
    }
};