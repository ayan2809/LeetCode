class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n=nums.size(),first=INT_MAX,second=INT_MAX,third =INT_MIN;
        // first+=1;
        // second-=1;
        // third-=1;
        int mincheck=INT_MIN;
        //mincheck-=1;
        int maxcheck=INT_MAX;
        //maxcheck+=1;
        
        for(int i=0;i<n;i++)
        {
            if(nums[i]<=first)
            {
                 first=nums[i];
            }
            else if(nums[i]>first && nums[i] <=second )
            {
                second=nums[i];
            }
            else
            {
                return true;
            }
        }
        // if(third==mincheck || second == mincheck)
        //     return false;
        return false;
    }
    
};