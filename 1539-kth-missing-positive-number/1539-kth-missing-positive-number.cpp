class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        for (int n = 1, i = 0; n <= 1000; ++n) {
        if (i < arr.size() && arr[i] == n)
            ++i;
        else if (--k == 0)
            return n;
        }
        return 1000 + k;
    }
};