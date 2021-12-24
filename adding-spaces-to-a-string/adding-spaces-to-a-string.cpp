class Solution {
public:
    string addSpaces(string s, vector<int>& sps) {
    string res(s.size() + sps.size(), ' ');
    for (int i = 0; i <= sps.size(); ++i) {
        int prev = i ? sps[i - 1] : 0, cur = i == sps.size() ? s.size() : sps[i];
        copy(begin(s) + prev, begin(s) + cur, begin(res) + prev + i);
    }
    return res;
}
};