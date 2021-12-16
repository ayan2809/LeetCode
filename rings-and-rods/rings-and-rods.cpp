class Solution {
public:
     int countPoints(string s) {
        bool cnt[10][3] = {};
        for (int i = 0; i < s.size(); i += 2) {
            int color = s[i] == 'R' ? 0 : (s[i] == 'G' ? 1 : 2), index = s[i + 1] - '0';
            cnt[index][color] = true;
        }
        int ans = 0;
        for (int i = 0; i < 10; ++i) {
            ans += cnt[i][0] && cnt[i][1] && cnt[i][2];
        }
        return ans;
    }
};