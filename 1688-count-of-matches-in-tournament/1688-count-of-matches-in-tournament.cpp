class Solution {
public:
    int numberOfMatches(int n) {
        int mat=0;
        while(n!=1)
        {
            if(n%2==0)
            {
                mat+=n/2;
                n=n/2;
            }
            else
            {
                mat+=floor(n/2.0);
                n=floor(n/2.0)+1;
            }
        }
        return mat;
    }
};