class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        stack<char> x;
        int open=0, close=0, ans=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                st.push('(');
            }
            else if (s[i]==')' && !st.size()) {
                ans++;
            }
            else if(s[i]==')' && st.size()) {
                st.pop();
            }
        }
        return ans+st.size();
    }
};