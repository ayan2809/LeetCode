class Solution {
public:
    string reversePrefix(string word, char ch) {
        string str="";
        size_t position = word.find(ch);
        if(position==string::npos )
        return word;
        string rev = word.substr(0, position+1);
        reverse(rev.begin(), rev.end());
        return rev + word.substr(position+1);
        // return word;
    }
};