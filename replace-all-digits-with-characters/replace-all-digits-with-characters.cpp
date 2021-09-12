class Solution {
public:
    string replaceDigits(string s) {
        for(int i=0 ; i<s.size();i++)
        {
            if(isdigit(s[i]))
            {
                s[i]=s[i-1] +s[i]-48;
            }
        }
        return s;
    }
};