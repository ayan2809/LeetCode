class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        vector<vector<int>> ans;
        int n=s.length();
        int i=0;
        while(i<n)
        {
            int j=i+1;
            // cout<<s[i]<<" "<<s[j]<<endl;
            while(j<n)
            {
                if(s[i]!=s[j])
                    break;
                j++;
            }
            if((j)-i>=3)
            {
                ans.push_back({i,j-1});
                i=j;
                continue;
            }
            // if(i==j)
            // i++;
            // else 
            // i=j;
            i++;
        }
        return ans;
    }
};