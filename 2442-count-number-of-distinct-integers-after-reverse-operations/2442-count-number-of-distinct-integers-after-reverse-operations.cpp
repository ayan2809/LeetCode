class Solution {
public:
    int reverseDig(int num)
    {
        string s=to_string(num);
        reverse(s.begin(), s.end());
        int ans=stoll(s);
        return ans;
    }
    int countDistinctIntegers(vector<int>& nums) {
        set<int> ans;
        for(auto it: nums)
        {
            ans.insert(it);
            ans.insert(reverseDig(it));
        }
        return ans.size();
    }
};