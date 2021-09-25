class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> ans;
        ans.push_back(0);
        for(int i=1;i<=gain.size();i++)
        {
            //cout<<ans[i-1]<<" "<<gain[i-1]<<endl;
            ans.push_back(ans[i-1]+gain[i-1]);
         
        }
        return *max_element(ans.begin(), ans.end());
    }
};