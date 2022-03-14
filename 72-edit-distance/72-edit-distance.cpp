class Solution {
public:
    int editDistance_mem(string s, string t, int **output)
    {
        int m= s.size();
        int n= t.size();

        // base case
        if(s.size()==0 || t.size()==0)
        {
            return max(s.size(), t.size());
        }
        // check if ans already exists
        if(output[m][n]!=-1)
        {
            return output[m][n];
        }

        int ans;
        if(s[0]==t[0])
        {
            return editDistance_mem(s.substr(1), t.substr(1),output);
        }
        else
        {
            //insert
            int x= editDistance_mem(s.substr(1),t,output)+1;
            // delete
            int y= editDistance_mem(s,t.substr(1), output)+1;		
            // replace
            int z= editDistance_mem(s.substr(1), t.substr(1), output)+1;
            ans=  min(x, min(y, z));
        }	
        output[m][n]=ans;
        return output[m][n];
    }

    int minDistance(string s, string t) {
        int m= s.size();
        int n= t.size();
        int **ans= new int*[m+1];
        for(int i=0;i<=m;i++)
        {
            ans[i]=new int[n+1];
            for(int j=0;j<=n;j++)
            {
                ans[i][j]=-1;
            }
        }
        return editDistance_mem(s, t, ans);
    }
    
    
};