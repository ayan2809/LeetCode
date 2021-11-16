class Solution {
public:
    int timeRequiredToBuy(vector<int>& t, int k) {
    int res = 0, sz = t.size(), cap = t[k];
    for (int i = 0; i < sz; ++i)
        res += min(cap - (i > k), t[i]);
    return res;
}
};