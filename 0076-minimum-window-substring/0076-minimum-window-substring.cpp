class Solution {
public:
    string minWindow(string s, string t) {
        if(s.size() < t.size())
            return "";
        string ans;
        unordered_map<char , int> mp;
        
        for(int i=0 ; i<t.size() ; i++){
            mp[t[i]]++; 
        }
        
        int count = t.size();
        int p1 = 0 , minSize = INT_MAX , p2 = 0;
        
        while(p2 < s.size()){
            while(count != 0 && p2 < s.size()){
                if(mp[s[p2]] > 0) {
                    count--;
                    mp[s[p2]]--;
                } 
                else {
                    mp[s[p2]]--;
                }
                p2++;
            }
            if(count != 0){
                return ans;
            }
            else {
                while(count == 0){
                    if(count == 0){
                        if(minSize > p2-p1){
                            minSize = p2-p1;
                            ans = s.substr(p1 , p2-p1);
                        }  
                    }
                    mp[s[p1]]++;
                    if(mp[s[p1]] > 0){
                        count++;
                        p1++;
                    }
                    else {
                        p1++;
                    } 
                }    
            }    
        }
        return ans;
    }
};