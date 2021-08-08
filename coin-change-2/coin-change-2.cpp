class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int len=coins.size();
        long long dp[len+1][amount+1];
        for(int i=0;i<=len;i++)
        {
            for(int j=0;j<=amount;j++)
            {
                if(j==0){
                    dp[i][j]=1;continue;}
                if(i==0){
                    dp[i][j]=0;continue;}
                if(coins[i-1]<=j)
                {
                    dp[i][j]=dp[i][j-coins[i-1]]+dp[i-1][j];
                }
                else
                {
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[len][amount];
    }
};