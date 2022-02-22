class Solution {
public:
    int titleToNumber(string columnTitle) {
        int x=columnTitle.length();
        int ans=0;
        for(int i=x-1;i>=0;i--)
        {
            int j=x-i-1;
            if(j==0)
                ans+=columnTitle[i]-64;
            else
                ans+=pow(26,j)*(columnTitle[i]-64);
           
        }
        return ans;
    }
};