class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> out;
        for(int i=0;i<nums.size();i++)
        {
            //it = std::find (vec.begin(), vec.end(), ser);
            //auto itr= std ::find (nums2.begin(), nums2.end(), nums1[i]);
            //auto it= itr - nums2.begin();
            int f=0;
            for(int j= i+1;j<nums.size();j++)
            {
                if(nums[j]>nums[i])
                {    out.push_back(nums[j]);
                    f=1;
                    break;
                }
            }
            if(f==1)
                continue;
            for(int j= 0;j<i;j++)
            {
                if(nums[j]>nums[i])
                {    out.push_back(nums[j]);
                    f=1;
                    break;
                }
            }
            if(f!=1)
                out.push_back(-1);
            
            
        }
        return out;
    }
};