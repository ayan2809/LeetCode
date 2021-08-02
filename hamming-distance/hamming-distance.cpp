class Solution {
public:
    int hammingDistance(int x, int y) {
        int bits[32];
        int bits2[32];
        memset(bits, 0, sizeof(bits[0])*32);
        memset(bits2, 0, sizeof(bits2[0])*32);
        int i=0;
        while(x>0)
        {
            bits[i]=x%2;
            x=x/2;
            i++;
        }
        int j=0;
        while(y>0)
        {
            bits2[j]=y%2;
            y=y/2;
            j++;
        }
        int count=0;
        for(int k=0;k<32;k++)
        {
            if(bits[k]!=bits2[k])
                count++;
            
        }
        return count;
    }
};