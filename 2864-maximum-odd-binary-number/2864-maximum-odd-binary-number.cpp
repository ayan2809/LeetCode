class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int one=count(s.begin(), s.end(), '1');
        int n = s.length();
        string ans(n, '0');
        for(int i=0;i<n;i++)
        {
            if(one>1)
            {
                s[i]='1';
                one--;
            }
            else
                s[i]='0';
        }
        s[n-1]='1';
        return s;
    }
};