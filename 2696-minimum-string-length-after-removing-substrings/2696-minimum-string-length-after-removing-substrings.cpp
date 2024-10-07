class Solution {
public:
    int minLength(string s) {
        stack<char> st;
       for(auto it: s)
       {
        if(it=='B' && st.size() && st.top()=='A') 
            st.pop();
        else if(it=='D' && st.size() && st.top()=='C') 
            st.pop();
        else
            st.push(it);
       }
       return st.size();
    }
};