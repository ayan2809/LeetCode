class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        vector<int> l;
        vector<int> r;
        int left=0, right=0;
        for(int i=0;i<nums.size();i++)
        {
            left+=nums[i];
            right+=nums[nums.size()-i-1];
            l.push_back(left);
            r.push_back(right);
        }
        reverse(r.begin(), r.end());
        int ans=-1;
        for(auto it: l)
        {
            cout<<it<<" ";
        }
        cout<<endl;
        for(auto it: r)
        {
            cout<<it<<" ";
        }
        cout<<endl;
        for(int i=0;i<l.size();i++)
        {
            if(r[i]==l[i])
            {
                ans=i;
                break;
            }
        }
        return ans; 
    }
};