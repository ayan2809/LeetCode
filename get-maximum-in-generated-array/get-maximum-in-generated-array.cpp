class Solution {
public:
    int getMaximumGenerated(int n) {
        if(n==0)
            return 0;
        if(n==1)
            return 1;
        vector<int> out(n+1);
        out[0]=0;
        out[1]=1;
        int maxi=max(out[0],out[1]);
        int j=1;
        for(int i=2;i<=n;i++)
        {
            if(i%2==0)
            {
                out[i]=out[j];
                j++;
            }
            else
            {
                out[i]=out[j]+out[j-1];
            }
            maxi=max(maxi, out[i]);
        }
        return maxi;
    }
};