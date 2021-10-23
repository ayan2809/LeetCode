class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        map<char, int> umap;
        for(auto it: brokenLetters)
        {
            umap[it]=1;
        }
        int count=0,ans=0;
        string x="";
        for(auto it: text)
        {
            if(it==' ')
            {
                if(count==0)
                    ans++;
                count=0;
            }
            if(umap[it]==1)
            {
                count++;
                //x+=it;
            }
        }
        if(count==0)
            ans++;
        return ans;
    }
};