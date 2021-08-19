class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if(nums.size()<3)
            return {};
        set <vector<int>> out;
        sort(nums.begin(), nums.end());
        for(int i=0;i<nums.size()-2;i++)
        {
            int j=i+1;
            int k=nums.size()-1;
            while(j<k)
            {
                int current=nums[i];
                current+=nums[j];
                current+=nums[k];                
                if(current==0)
                {
                    out.insert({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                    //break;
                }
                else if(current>0)
                {
                    k--;
                }
                else
                {
                    j++;
                }
            }
            
        }
        vector<vector<int>> ans;
        for(auto it: out)
            ans.push_back(it);
        return ans;
    }
};