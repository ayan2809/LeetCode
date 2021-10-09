class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int ans=0;
        for(auto it: operations)
        {
            string a=it.substr(0, 2);
            string b=it.substr(1, 2);
            if(a=="++")
            {
                ++ans;
            }
            else if(a=="--")
            {
                --ans;
            }
            else if(b=="++")
            {
                ans++;
            }
            else
            {
                ans--;
            }
        }
        return ans;
    }
    
};