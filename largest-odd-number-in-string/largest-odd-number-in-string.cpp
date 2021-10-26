class Solution {
public:
    string largestOddNumber(string num) {
        int idx = num.size() - 1;
        while(idx >= 0) {
            if((num[idx] - '0')% 2) break;
            idx--;
        }
        if(idx < 0) return "";
        return num.substr(0, idx + 1);
    }
};