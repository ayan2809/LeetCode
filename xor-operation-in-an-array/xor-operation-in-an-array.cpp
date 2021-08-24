class Solution {
public:
    int xorOperation(int n, int start) {
        int ans=0;
        int i=start;
        while(n--)
        {
            //cout<<i<<" ";
            ans=ans^i;
            i+=2;
        }
        return ans;
    }
};