class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> output;
        sort(nums.begin(),nums.end());
        do {
            output.push_back(nums);
    } while (next_permutation(nums.begin(), nums.end()));
        
        return output;

    }
};