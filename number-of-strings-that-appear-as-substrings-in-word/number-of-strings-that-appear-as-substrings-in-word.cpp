class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int count=0;
        for(auto it: patterns)
        {
           size_t found = word.find(it);
            if (found != string::npos)
                count++;
        }
        return count;
    }
};