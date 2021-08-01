class Solution {
public:
    int numTrees(int n) {
        long long cat[n+1];
        cat[0]=cat[1]=1;
        if(n<=1)
            return 1;
        
        for(int i=2;i<=n;i++)
        {
            cat[i]=0;
            for(int j=0;j<i;j++)
            {
                cat[i]+=cat[j]*cat[i-j-1];
            }
        }
        return cat[n];
    }
    
};