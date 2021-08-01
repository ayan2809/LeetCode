class Solution {
public:
    bool subsetSumProblem(vector<int> a, int n)
    {
        int len=a.size();
        bool ans[len+1][n+1];
         memset(ans, false, sizeof(ans[0][0]) * (len+1) * (n+1));
        for(int i=0;i<=len;i++)
        {
             for(int j=0;j<=n;j++)
             {
                 if(i==0)
                     {ans[i][j]=false;continue;}
                 if(j==0)
                     {ans[i][j]=true; continue;}
                 
                 if(a[i-1]<=j)
                     ans[i][j]=(ans[i-1][j-a[i-1]] || ans[i-1][j]);
                 
                 else
                     ans[i][j]=ans[i-1][j];
                 
                }
        }
        // for(int i=0;i<=len;i++)
        // {
        //     for(int j=0;j<=n;j++)
        //     {
        //         cout<<ans[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        // cout<<endl;
        
        return ans[len][n];
    }
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(auto it: nums)
            sum+=it;
        if(sum%2!=0)
            return false;
        
        else
            return subsetSumProblem(nums, sum/2);
    }
};