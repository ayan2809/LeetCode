class Solution {
public:
    int maxNumberOfBalloons(string text) {
        string check="balloon";
        map<char, int> umap;
        for(auto it: text)
        {
            umap[it]+=1;
        }
        int ans=0;
        ans=umap['b'];
        for(auto it: check)
        {
            if(it=='l' || it=='o')
            {
                ans=min(ans, umap[it]/2); 
                continue;
            }
            ans= min(ans, umap[it]);
        }
        return ans;
    }
};