class Solution {
public:
    int minimumDeletions(vector<int>& A) {
        int i = 0, j = 0, n = A.size();
        for (int k = 0; k < n; ++k) {
            if (A[i] < A[k]) i = k;
            if (A[j] > A[k]) j = k;
        }
        return min({max(i + 1, j + 1), max(n - i, n - j), i + 1 + n - j, j + 1 + n - i});
    }
};