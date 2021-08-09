class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        if(amount==0)
            return 0;
        int len=coins.size();
        int dp[len+1][amount+1];
        int mini=-1;
        //memset(dp, 0, sizeof(dp[0][0])*(len+1)*(amount+1));
        for(int i=0;i<=len;i++)
        {
            for(int j=0;j<=amount;j++)
            {
                // if(i==0 && j==0)
                // {
                //     dp[i][j]=INT_MAX-1;
                //     continue;
                // }
                 if(j==0){
                    dp[i][j]=0;continue;}
                if(i==0){
                    dp[i][j]=INT_MAX-1;continue;}
                if(i==1){
                    if(j%coins[i-1]==0)
                    {
                        dp[i][j]=(int)j/coins[i-1];
                    }
                    else
                    {
                        dp[i][j]=INT_MAX-1;
                    }
                    continue;
                }
                
        
                if(coins[i-1]<=j)
                {
                    dp[i][j]=min(dp[i][j-coins[i-1]]+1,dp[i-1][j]);
                    
                }
                else
                {
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        
        if(dp[len][amount]==INT_MAX-1)
            return -1;
        return dp[len][amount];
    }
};