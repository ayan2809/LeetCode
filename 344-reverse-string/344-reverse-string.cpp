class Solution {
public:
    void reverseString(vector<char>& s) {
        if(s.size()<1)
            return;
        
        char ch=s[s.size()-1];
        s.pop_back();
        reverseString(s);
        s.insert(s.begin()+0,ch);
    }
};