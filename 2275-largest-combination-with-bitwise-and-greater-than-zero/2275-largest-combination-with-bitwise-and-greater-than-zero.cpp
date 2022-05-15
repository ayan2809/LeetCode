class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        vector <int> check(32,0);
        for(auto it: candidates)
        {
            for(int j=0;j<32;j++)
            {
                check[j]+=it>>j&1;         
            }
        }
        return *max_element(check.begin(), check.end());
    }
};