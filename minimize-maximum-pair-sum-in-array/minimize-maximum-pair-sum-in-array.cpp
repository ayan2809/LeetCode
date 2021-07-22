class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int len=nums.size();
        len/=2;
        sort(nums.begin(),nums.end());
        int maxi=-1,k=nums.size()-1;
        for(int i=0;i<=len;i++)
        {
            maxi=max(maxi,(nums[i]+nums[k]));
            k--;
        }
        return maxi;
    }
};