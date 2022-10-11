class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n=nums.size(),first=INT_MAX,second=INT_MAX,third =INT_MAX;
        int mincheck=INT_MIN;
        int maxcheck=INT_MAX;
        
        for(int i=0;i<n;i++)
        {
           
            first=min(nums[i],first);
            
            if(nums[i]>first && nums[i] <=second )
            {
                second=nums[i];
            }
            else if(nums[i]> second && nums[i]<=third)
            {
                third=nums[i];
                return true;
            }
        }
        return false;
    }
    
};