class Solution {
public:
    int solve(vector<int> a)
    {
        int s=0;
        int e=a.size()-1;
        int count=a.size();
        while(s<=e)
        {
            int mid=(s+e)/2;
            if(a[mid]!=abs(a[mid]))
            {
                count=mid;
                e=mid-1;
            }
            else if(a[mid]<0)
            {
                e=mid-1;
            }
            else
            {
                s=mid+1;
            }
        }
        return count;
    }
    int countNegatives(vector<vector<int>>& grid) {
        int ans=0;
        for(int i=0;i<grid.size();i++)
        {
            ans+=grid[i].size()-solve(grid[i]);   
        }
        return ans;
    }
};