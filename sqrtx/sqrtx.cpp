class Solution {
public:
    int binarySearch(int l, int r,int x)
    {
        long long ans= INT_MIN;
        while(l<=r)
        {
            long long mid=(l+r)>>1;
            if(mid*mid<=x)
            {
                ans= max(mid, ans);
                l=mid+1;
            }
            else if(mid*mid>x)
            {
                r=mid-1;
            }
        }
        return ans;
    }
    int mySqrt(int x) {
        
        return binarySearch(0, x, x);
        
    }
};