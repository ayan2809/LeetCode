class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        map<char, int> umap;
        for(auto it: chars)
        {
            umap[it]+=1;
        }
        int ans=0;
        for(auto it: words)
        {
            int count=0;
            map<char, int> x= umap;
            for(auto itr: it)
            {
                if(x[itr]!=0)
                {
                    count++;
                    x[itr]--;
                }
            }
            if(count==it.length())
            {
                ans+=it.length();
            }
        }
        return ans;
    }
};