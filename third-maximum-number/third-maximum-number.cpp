class Solution {
public:
    int thirdMax(vector<int>& nums) {
               
        map<int, int> umap;
        for(auto it: nums)
        {
            umap[it]+=1;
        }
        if(umap.size()<3)
            return *max_element(nums.begin(),nums.end());
        int i=0;
        for (auto it = umap.rbegin(); it != umap.rend(); it++) 
        {
            if(i==2)
                return it->first;
            
            i++;
        }
        return -1;
        
    }
};