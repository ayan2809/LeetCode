class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
         vector<string> morse_code = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    unordered_set<string> ans;
    
    for(auto word : words) {
        string code = "";
        for(auto ch : word)
            code += morse_code[ch - 97];
        ans.insert(code);
    }
    
    return ans.size();
    }
};