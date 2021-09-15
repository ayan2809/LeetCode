class Solution {
public:
    int balancedStringSplit(string s) {
        int c=0,out=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='R')
                c--;
            else
                c++;
            if(c==0)
                out++;
        }
        return out;
    }
};