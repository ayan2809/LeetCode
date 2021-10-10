class Solution {
public:
    int powerOfTwo(int n)
    {
        return (n && (!(n & (n-1))));
    }
    int rangeBitwiseAnd(int left, int right) {
        return (right>left)? (rangeBitwiseAnd(left/2,right/2)<<1):left;
    }
};