class Solution {
public:
    int solver(vector <int> a, int n)
    {
        int len=a.size();
        int dp [len+1][n+1];
        memset(dp,0,sizeof(dp[0][0])*(len+1)*(n+1));
        for(int i=0;i<=len;i++)
        {
            for(int j=0;j<=n;j++)
            {
                // if(i==0 && j==0)
                // {
                //     dp[i][j]=1;
                //     continue;
                // }
                if(j==0)
                    {dp[i][j]=1;continue;}
                if(i==0)
                    {dp[i][j]=0;continue;}
                if(a[i-1]<=j && a[i-1]!=0)
                {
                    dp[i][j]=dp[i-1][j-a[i-1]]+dp[i-1][j];
                }
                else
                {
                     dp[i][j]=dp[i-1][j];
                }
            }
        }
        // for(int i=0;i<=len;i++)
        // {
        //     for(int j=0;j<=n;j++)
        //     {
        //         cout<<dp[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        // cout<<endl;
        
        return dp[len][n];
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum=0,count=0;
        for(auto it: nums){
            if(it==0)
                count++;
            sum+=it;
        }
        if((sum+target)%2!=0)
            return 0;
        int check=(sum+target)/2;
        if(check>sum)
            return 0;
        cout<<check<<endl;
        return solver(nums, check)*pow(2,count);
    }
};