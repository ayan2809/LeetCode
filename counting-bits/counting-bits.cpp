class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> output;
        for(int i=0;i<=n;i++)
            output.push_back(__builtin_popcount(i));
        return output;
    }
};