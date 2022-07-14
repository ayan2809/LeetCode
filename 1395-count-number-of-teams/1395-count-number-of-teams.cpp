class Solution {
public:
    int numTeams(vector<int>& rating) {
        int n=rating.size();
        vector<int> up(n,0);
        vector<int> down(n,0);
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i;j>=0;j--)
            {
                if(rating[i]>rating[j])
                {
                    up[i]++;
                    ans+=up[j];
                }
            }
        }
        
        for(int i=0;i<n;i++)
        {
            for(int j=i;j>=0;j--)
            {
                if(rating[i]<rating[j])
                {
                    down[i]++;
                    ans+=down[j];
                }
            }
        }
        return ans;
        
    }
};