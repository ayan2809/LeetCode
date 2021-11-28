class Solution {
public:
    vector<int> targetIndices(vector<int>& A, int target) {
        sort(begin(A), end(A));
        vector<int> ans;
        for (int i = 0; i < A.size(); ++i) {
            if (A[i] == target) ans.push_back(i);
        }
        return ans;
    }
};