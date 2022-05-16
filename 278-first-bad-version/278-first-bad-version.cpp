// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int f=0,e=n;
        while((e-f)>1)
        {
            int mid=f+(e-f)/2;
            if(isBadVersion(mid)==true)
            {
                e=mid;
            }
            else
            {
                f=mid;
            }
        }
        return e;
    }
};