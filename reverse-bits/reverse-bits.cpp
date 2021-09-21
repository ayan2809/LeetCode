class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int a[32],i=0,j=31;
        uint32_t ans=0;
        for (int i = 0; i < 32; ++i) 
        {
            a[i]=((n >> i) & 1 );
        }
        for(auto it: a)
        {
           ans+=it*pow(2,j);
               j--;
        }
        return ans;
    }
};