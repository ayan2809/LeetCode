class Solution {
public:
    bool detectCapitalUse(string word) {
        int f=0;
        for(auto it: word)
        {
            if(it>=97 && it<=122)
            {
                f++;
            }
        }
        if((word[0]>=65 && word[0]<=90 && f==word.length()-1) || f==word.length() || f==0 )
            return true;
        return false;
    }
};