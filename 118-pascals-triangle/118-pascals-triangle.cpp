class Solution {
public:
    vector<vector<int>> generate(int numRows) {
       vector<vector<int>> anss;
         if(numRows==1)
         {
             anss.push_back({1});
             return anss;
         }
        else if(numRows==2)
        {
            anss.push_back({1});
            anss.push_back({1,1});
            return anss;
        }
        anss.push_back({1});
        anss.push_back({1,1});
        vector<int> ans={1,1};
        int f=1;
        for(int i=1;i<numRows-1;i++)
        {
            int x=ans.size();
            vector<int> y;
            y.push_back(ans[0]);
            for(int i=1;i<x;i++)
            {
                y.push_back(ans[i]+ans[i-1]);
            }
            y.push_back(1);
            ans=y;
            anss.push_back(ans);
            
        }
        return anss; 
    }
};