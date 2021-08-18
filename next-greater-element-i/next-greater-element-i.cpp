class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> out;
        for(int i=0;i<nums1.size();i++)
        {
            //it = std::find (vec.begin(), vec.end(), ser);
            auto itr= std ::find (nums2.begin(), nums2.end(), nums1[i]);
            auto it= itr - nums2.begin();
            int f=0;
            for(int j= it+1;j<nums2.size();j++)
            {
                if(nums2[j]>nums1[i])
                {    out.push_back(nums2[j]);
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