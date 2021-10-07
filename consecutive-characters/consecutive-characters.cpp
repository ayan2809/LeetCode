class Solution {
public:
    int maxPower(string s) {
        int ans=INT_MIN,j=0,i=0;
        for( i=1;i<s.length();i++)
        {
            if(s[i]!=s[i-1])
            {
                ans=max(i-j,ans);
                j=i;
            }
            
        }
        ans=max(i-j,ans);
        if(ans==INT_MIN)
            return 0;
        return ans;
    }
};