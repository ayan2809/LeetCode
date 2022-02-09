class Solution {
public:
    int sum(int n)
    {
        int x=0;
        while(n!=0)
        {
            x+=n%10;
            n/=10;
        }
        return x;
    }
    int countBalls(int lowLimit, int highLimit) {
        int maxi=-1;
        int ans=0;
        map<int, int> umap;
        for(int i=lowLimit; i<=highLimit;i++)
        {
            int x=sum(i);
            umap[x]+=1;
            if(umap[x]>=maxi)
            {
                ans=umap[x];
                maxi=max(maxi, umap[x]);
            }
        }
        return ans;
        // int count=0;
        // for(auto it: umap)
        // {
        //     if(it.second==maxi)
        //     {
        //         count++;
        //     }
        // }
        // return count;
    }
};