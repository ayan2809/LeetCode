class Solution {
public:
    int minimumLength(string s) {
        if(s.length()<=1)
        return 1;
        int i=0, j=s.length()-1, ans=0;
        while(s[i]==s[j] && i<j){
            char buffer = s[i];
            for(;i<=j;i++){
                if(s[i]!=buffer)
                {
                   break; 
                }    
            }
            for(;j>i;j--){
                if(s[j]!=buffer)
                {
                   break; 
                }    
            }
        }
        return j-i+1;
    }
};