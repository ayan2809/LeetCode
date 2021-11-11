class Solution {
public:
    int minStartValue(vector<int>& nums) {
        vector<int> ans;
        int x=0;
        for(int i=0;i<nums.size();i++)
        {
            x+=nums[i];
            ans.push_back(x);
        }
        for(auto it: ans)
            cout<<it<<" ";
        int mini=*min_element(ans.begin(),ans.end());
        if(mini<=0)
        {
            return abs(mini)+1;
        }
        return 1;
        
    }
};