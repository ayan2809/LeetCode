class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> out(2, -1);
        auto index=find(nums.begin(), nums.end(),target);
        if(index==nums.end())
            return out;
        
        else
        {
            out[0]=index-nums.begin();
            
            auto idx= find (nums.rbegin(), nums.rend(), target);
            // if(nums.rend()-idx==out[0])
            // {
            //     return out;
            // }
            out[1]=nums.rend()-idx-1;
        }
        return out;
    }
};