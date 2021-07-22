class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> output;
     for (int i=0; i<nums.size(); i+=2)
            output.insert(output.end(), nums[i], nums[i+1]);
    return output;
    }
};