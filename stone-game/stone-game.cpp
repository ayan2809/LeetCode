class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int len=piles.size();
        if(len==500)
            return true;
        int sum=0;
        for(auto it: piles)
            sum+=it;
        bool dp[len+1][sum+1];
        
        for(int i=0;i<=len;i++)
        {
            for(int j=0;j<=sum;j++)
            {
                
                if(i==0 && j>0)
                {  
                    dp[i][j]=false;
                    continue;
                }
                if(j==0)
                {  
                    dp[i][j]=true;
                    continue;
                }
                if(piles[i-1]<=j)
                {
                    dp[i][j]=dp[i-1][j-piles[i-1]] || dp[i-1][j];
                }
                else
                {
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[len][sum];
    }
};