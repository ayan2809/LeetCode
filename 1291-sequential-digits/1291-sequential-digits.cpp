class Solution {
public:
    vector<int> calculator()
    {
        vector<string> out;
        int k=8;
        for(int i=2;i<=9;i++)
        {
            string s="";
            for(int j=1;j<=i;j++)
            {
                s+='0'+j;
            }
            for(int j=0;j<k;j++)
            {
                out.push_back(s);
                for(int f=0;f<s.length();f++)
                    s[f]=((s[f]-'0')+1)+'0';
            }
            k--;
            
        }
        vector<int> ans;
        for(auto it: out)
        {
            ans.push_back(stoi(it));
        }
        
        
        return ans;
    }
    vector<int> sequentialDigits(int low, int high) {
        
        vector<int> check=calculator();
        vector<int> out;
        for(int i=0;i<check.size();i++)
        {
            if(check[i]>=low && check[i]<=high)
                out.push_back(check[i]);
        }
        return out;
    }
};