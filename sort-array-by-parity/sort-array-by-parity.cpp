class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        list<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
                ans.push_front(nums[i]);
            else
                ans.push_back(nums[i]);
        }
        vector<int> a;
        for(auto it: ans)
            a.push_back(it);
        return a;
    }
};