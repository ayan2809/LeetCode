class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map <string, vector<string>> umap;
        
        for(int i=0;i<strs.size();i++)
        {
            string s=strs[i];
            sort(s.begin(),s.end());
            umap[s].push_back(strs[i]);
        }
        vector<vector<string>> out;
        for (auto it: umap)
        {
            out.push_back(it.second);
        }
        return out;
    }
};