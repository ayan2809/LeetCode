class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        if(tokens.size()==0)
        return 0;
        sort(tokens.begin(), tokens.end());
        int i=0, j=tokens.size()-1;
        int ans = 0;
        int mini = tokens[i];
        if(power<mini)
            return 0;
        while(i<j || power>=mini){
            mini=tokens[i];
            cout<<ans<<" "<<power<<" "<<mini<<" "<<tokens[j]<<endl;
            if(power>=mini){
                ans++;
                power-=mini;
                i++;
            } 
            else if(ans>=1 && power<mini && i<j){
                power+=tokens[j];
                ans--;
                j--;
            }
        }
        cout<<ans<<endl;
        return ans;
    }
};