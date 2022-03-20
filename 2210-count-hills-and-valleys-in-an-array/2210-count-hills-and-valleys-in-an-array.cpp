class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int count=0;
        int a=0,b=2;
        int pre=nums[a++];
        int pos= nums[b++];
       for(int i=1;i<nums.size()-1;i++)
       {
           
           cout<<pre<<" "<<pos<<endl;
           if(nums[i]==pos)
           {
               a++;
               pos= nums[b++];
               // cout<<nums[i]<<endl;
               continue;
           }
           if(nums[i]>pre && nums[i]>pos)
           {
               // pre=nums[i];
               // cout<<nums[i]<<endl;
               count++;
           }
           if(nums[i]<pre && nums[i]<pos)
           {
               
               cout<<nums[i]<<endl;
               count++;
           }
           pre= nums[a++];
           pos= nums[b++];
       }
        return count;
    }
};