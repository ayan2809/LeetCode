class Solution {
public:
    string reverseOnlyLetters(string s) {
        string ans="";
        for(auto it: s)
        {
            if((it>=65 && it<=90) || (it>=97 && it<=122))
            {
                ans+=it;
            }
        }
        int j=ans.length()-1;
        string check="";
        for(int i=0;i<s.length();i++)
        {
            if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122))
            {
                check+=ans[j];
                j--;
                continue;
            }
            check+=s[i];
        }
        while(j>=0)
        {
            check+=ans[j];
            j--;
        }
        return check;
    }
};