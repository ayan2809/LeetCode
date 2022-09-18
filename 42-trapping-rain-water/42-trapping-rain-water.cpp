class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> left;
        vector<int> right;
        int maxil=-1;
        int maxir=-1,n=height.size()-1;
        int out=0;
        for(int i=0;i<height.size();i++)
        {
            maxil=max(height[i], maxil);
            left.push_back(maxil);
            maxir=max(height[n-i], maxir);
            right.push_back(maxir);
        }
        reverse(right.begin(), right.end());
        for(int i=0;i<height.size();i++)
        {
            out+=min(left[i], right[i])-height[i];
        }
        return out;
    }
};