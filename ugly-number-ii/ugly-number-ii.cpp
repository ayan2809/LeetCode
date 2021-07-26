class Solution {
public:
    int nthUglyNumber(int n) {
        if(n==1)
            return 1;
        vector<long long> output(n+1);
        output[0]=1;
        long long next2=2,next=1,next3=3,next5=5,i2=0,i3=0,i5=0;
        for(long long i=1;i<n;i++)
        {
            next=min(next2,min(next3,next5));
            output[i]=next;
            if(next==next2)
            {
                i2++;
                next2=output[i2]*2;
            }
            if(next==next3)
            {
                i3++;
                next3=output[i3]*3;
            }
            if(next==next5)
            {
                i5++;
                next5=output[i5]*5;
            }
        }
        return output[n-1];
    }
};