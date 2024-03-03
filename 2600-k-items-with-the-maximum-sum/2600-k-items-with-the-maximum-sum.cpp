class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        int ans=0;
        int a = min(numOnes, k);
        k-=a;
        ans+=a;

        int b = min(numZeros, k);
        k-=b;

        int c = min(numNegOnes, k);
        ans-=c;

        return ans;
    }
};