class Solution {
public:
    int change(int amount, vector<int>& coin) {
        int len=coin.size();
        long long dp[amount+1][len+1];
        for(int i=0;i<=amount;i++)
        {
            for(int j=0;j<=len;j++)
            {
                if(i==0)
                {
                    dp[i][j]=1;
                    continue;
                }
                if(j==0)
                {    dp[i][j]=0;
                    continue;
                }
                
                dp[i][j]=dp[i][j-1];
                // cout<<coin[j-1]<<" ";
                if(coin[j-1]<=i)
                {
                    // cout<<coin[j]<<" "<<i<<endl;
                    dp[i][j]+=dp[i-coin[j-1]][j];
                }
            }
            
        }
        // for(int i=0;i<=amount;i++)
        // {
        //     for(int j=0;j<=len;j++)
        //     {
        //         cout<<dp[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        return dp[amount][len];
    }
};