class Solution {
public:
    int arrangeCoins(int n) {
        int k=1,i=1;
        long long ans=1;
        for(i=1;i<=65535;i++)
        {
            ans=1;
            if(i%2==0)
            {
                ans*=i>>1;
                ans*=(i+1);
            }
            else if((i+1)%2==0)
            {
                ans*=(i+1)>>1;
                ans*=i;
            }
            
            if(ans==n)
                return i;
            if(ans>n)
                break;
        }
        return i-1;
    }
};