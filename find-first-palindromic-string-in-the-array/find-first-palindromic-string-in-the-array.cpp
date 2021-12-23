class Solution {
    bool isPalindrome(string &s) {
        int i = 0, j = s.size() - 1;
        while (i < j && s[i] == s[j]) ++i, --j;
        return i >= j;
    }
public:
    string firstPalindrome(vector<string>& A) {
        for (auto &s : A) {
            if (isPalindrome(s)) return s;
        }
        return "";
    }
};