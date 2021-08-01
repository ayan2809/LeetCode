class Solution {
public:
    int lastStoneWeightII(vector<int>& stones) {
        int len=stones.size();
        int sum=0;
        for(auto it: stones)
            sum+=it;
        bool dp[len+1][sum+1];
        
        for(int i=0;i<=len;i++)
        {
            for(int j=0;j<=sum;j++)
            {
                if(i==0 && j==0)
                {
                    dp[i][j]=true;
                    continue;
                }
                if(i==0)
                {  
                    dp[i][j]=false;
                    continue;
                }
                if(j==0)
                {  
                    dp[i][j]=true;
                    continue;
                }
                if(stones[i-1]<=j)
                {
                    dp[i][j]=dp[i-1][j-stones[i-1]] || dp[i-1][j];
                }
                else
                {
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        int ans=INT_MAX;
        for(int j=sum/2;j>=0;j--)
        {
            if(dp[len][j]==true)
            {
                ans=min(ans,sum-2*j);
            }
        }
        return ans;
    }
};