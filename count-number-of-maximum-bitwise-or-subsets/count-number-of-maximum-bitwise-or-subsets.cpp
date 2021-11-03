class Solution {
public:
    vector<vector<int>> dp;
    int solve(int i, vector<int> a, int oor, int xoor) {
        if(i == a.size()) {
            if(oor == xoor) return 1;
            return 0;
        }
        if(dp[i][oor] != -1)    return dp[i][oor];
        dp[i][oor] = solve(i + 1, a, oor | a[i], xoor) + solve(i + 1, a, oor, xoor);
        return dp[i][oor];
    }
    int countMaxOrSubsets(vector<int>& a) {
        int all_or = 0;
        for(auto i : a) all_or |= i;
        dp = vector<vector<int>> (a.size() + 1, vector<int>(all_or + 1, -1));
        return solve(0, a, 0, all_or);
    }
};