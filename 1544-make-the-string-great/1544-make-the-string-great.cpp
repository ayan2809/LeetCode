class Solution {
public:
    string makeGood(string s) {
        int i=0, n=s.length();
        stack<char> st;
        for(int i=0;i<n;i++){
            if(st.size()) {
                if (s[i]+32==st.top())
                {
                    st.pop();
                }
                else if(s[i]==st.top()+32){
                    st.pop();
                }
                else{
                    st.push(s[i]);
                }
            }
            else{
                st.push(s[i]);
            }
        }
        string ans="";
        while(st.size()){
            ans=st.top()+ans;
            st.pop();
        }
        return ans;
    }
};