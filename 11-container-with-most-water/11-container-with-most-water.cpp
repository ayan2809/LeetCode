class Solution {
public:
    int maxArea(vector<int>& height) {        
        int i=0,j=height.size()-1, ans=0;
        while(i<j)
        {
            int x=min(height[i], height[j]);
            ans=max(ans,(j-i)*x);
            if(x==height[i])
            {
                    i++;                
            }
            else if(x==height[j])
            {
                    j--;
            }
            else
            {
                j--;
            }
        }
        return ans;
    }
};