class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        
        vector<int> output;
        sort(nums.begin(),nums.end());
        map<int,int> finder;
        finder[nums[0]]=1;
        int f=0,k=nums[0];
        for(int i=1;i<nums.size();i++)
        {    
            finder[nums[i]]+=1;
            if(k==nums[i] && f==0)
            {
                k=nums[i];
                f=1;
            }
            else if(f==0)
            {
                k=nums[i];
            }
            
        }
        int fin=1;
        while(finder[fin]!=0)
        {
            if(finder[fin]==0)
                break;
            fin+=1;
            
        }
        
        return{k,fin};
        
    }
};