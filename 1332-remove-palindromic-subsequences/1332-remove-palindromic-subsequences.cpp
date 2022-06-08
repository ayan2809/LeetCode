class Solution {
public:
    int removePalindromeSub(string s) {
        string x2=string(s.rbegin(), s.rend());
        if(s==x2)
            return 1;
        return 2;
    }
};