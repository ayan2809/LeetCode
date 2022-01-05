class Solution {
public:
    int maxArea(vector<int>& height) {
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
        // int k=height.size()-1,ans=0;
        // int i=0,x=k;
        // for(int i=0;i<height.size();i++){
        //     cout<<left[i]<<" "<<right[i]<<endl;
        // }
        // while(k>0)
        // {
        //     ans=max(ans, min(left[i],right[i])*x);
        //     i++;
        //     k--;
        //     x-=2;
        // }
        
        int i=0,j=height.size()-1, ans=0;
        while(i<j)
        {
            int x=min(height[i], height[j]);
            ans=max(ans,(j-i)*x);
            if(x==height[i])
            {
                // if(height[i]<height[i+1])
                // {
                    i++;
                // }
                // else
                // {
                //     j--;
                // }
            }
            else if(x==height[j])
            {
                // if(height[j]<height[j-1])
                // {
                    j--;
                // }
                // else
                // {
                //     i++;
                // }
            }
            else
            {
                j--;
            }
        }
        return ans;
    }
};