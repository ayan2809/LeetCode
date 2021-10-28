class Solution {
public:
    map<int,vector<int>> mp;
    
    void set_values(vector<int>&nums){
        for(int i=0; i<nums.size(); i++){
           mp[nums[i]].push_back(i);       
        }    
    }
    Solution(vector<int>& nums) {
        set_values(nums);
    }
    
    int pick(int target) {
        vector<int> tmp = mp[target];
          return tmp[rand()%tmp.size()];
    }
};