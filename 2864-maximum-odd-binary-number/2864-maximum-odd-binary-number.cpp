class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int one=count(s.begin(), s.end(), '1');
        int n = s.length();
        return string(one-1, '1')+string(n-one, '0')+string(1, '1');
    }
};