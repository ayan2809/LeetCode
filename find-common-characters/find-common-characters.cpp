class Solution {
public:
    vector<string> commonChars(vector<string> &words)
      {
        vector<int> freq(26, INT_MAX), tmpFreq(26, 0);
        for (const auto &word : words)
        {
          std::fill(tmpFreq.begin(), tmpFreq.end(), 0);
          for (const auto &ch : word)
          {
            ++tmpFreq[ch - 'a'];
          }
          for (int i = 0; i < 26; ++i)
          {
            freq[i] = std::min(freq[i], tmpFreq[i]);
          }
        }
        vector<string> ans;
        for (int i = 0; i < 26; ++i)
        {
          for (int j = 0; j < freq[i]; ++j)
          {
            ans.push_back(std::string(1, i + 'a'));
          }
        }
        return ans;
  }
};