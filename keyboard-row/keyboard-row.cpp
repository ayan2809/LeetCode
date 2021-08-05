class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        map <char, int> umap;
        string s="qwertyuiop";
        for(int i=0;i<s.length();i++)
        {
            umap[s[i]]=1;
        }
        s="asdfghjkl";
        for(int i=0;i<s.length();i++)
        {
            umap[s[i]]=2;
        }
        s="zxcvbnm";
        for(int i=0;i<s.length();i++)
        {
            umap[s[i]]=3;
        }
        vector<string> output;
        for(int i=0;i<words.size();i++)
        {
            int f1=0,f2=0,f3=0;
            for(int j=0;j<words[i].length();j++)
            {
                if(umap[words[i][j]]==1)
                    f1++;
                if(umap[words[i][j]]==2)
                    f2++;
                if(umap[words[i][j]]==3)
                    f3++;
                
            }
            if(f1==0 && f2==0)
            {
                output.push_back(words[i]);
            }
            if(f2==0 && f3==0)
            {
                output.push_back(words[i]);
            }
            if(f3==0 && f1==0)
            {
                output.push_back(words[i]);
            }
        }
        
        return output;
        
    }
};