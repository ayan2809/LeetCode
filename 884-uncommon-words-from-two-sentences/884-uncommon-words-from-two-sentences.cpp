class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> umap;
        string x="";
        for(int i=0;i<s1.length();i++)
        {
            // string x=""
            if(s1[i]!=' ')
            {
                x+=s1[i];
            }
            else
            {
                umap[x]+=1;
                x="";
            }
            
        }
        umap[x]+=1;
        x="";
        for(int i=0;i<s2.length();i++)
        {
            // string x=""
            if(s2[i]!=' ')
            {
                x+=s2[i];
            }
            else
            {
                umap[x]+=1;
                x="";
            }
            
        }
        umap[x]+=1;
        vector<string> ans;
        for(auto it: umap)
        {
            if(it.second==1)
                ans.push_back(it.first);
        }
        
        return ans;
    }
};