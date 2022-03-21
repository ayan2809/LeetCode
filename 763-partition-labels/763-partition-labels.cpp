class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> ans;
        vector<int> checker(26,0);
        int maxi=INT_MIN;
        for(int i=0;i<s.length();i++)
        {
            checker[s[i]-97]=i;
        }
        int c=0;
        for(int i = 0; i < s.length(); i++)
        {
            maxi = max(maxi, checker[s[i]-97]);
            if(i == maxi) 
            {
                ans.push_back(maxi - c + 1);
                c = i+1;
            }
        }
        
        
        // for(int i=0;i<s.length();i++)
        // {
        //     if(checker[s[i]-97]==1 || i==s.length()-1)
        //     {
        //         ans.push_back(i-maxi);
        //         maxi=i;
        //         std::fill(checker.begin(), checker.end(), 0);
        //     }
        //     checker[s[i]-97]+=1;
        // }
        return ans;
    }
};