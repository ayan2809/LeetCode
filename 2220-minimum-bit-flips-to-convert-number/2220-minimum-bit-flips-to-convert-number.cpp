class Solution {
public:
    int minBitFlips(int start, int goal) {
        vector<int> s(32,0);
        vector<int> g(32,0);
        for(int i=0;i<32;i++)
        {
            s[i]=start>>i&1;
        }
        for(int i=0;i<32;i++)
        {
            g[i]=goal>>i&1;
        }
        int ans=0;
        for(int i=0;i<32;i++)
        {
            if(s[i]!=g[i])
                ans++;
        }
        
        return ans;
    }
};