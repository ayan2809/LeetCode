class Solution {
public:
    bool compare(string a, string b)
    {
        for(int i = 0; i < a.length(); ++i){
        if ((a[i] - '0') > (b[i] - '0'))
        { 
            return false;
        }
        else
        {
            return true;
        }}
        return false;
    }
    string removeDigit(string number, char digit) {
        vector<string> ans;
        for(int i=0;i<number.size();i++)
        {
            string x="";
            if(number[i]==digit)
            {
                string x=number.substr(0,i);
                x+=number.substr(i+1, number.size()-1);
                cout<<x<<endl;
                ans.push_back(x);
            }
        }
        string maxi=ans[0];
        // string x="12345676456432432";
        // for(auto it: ans)
        // {
        //     cout<<it<<endl;
        // }
        for(int i=0;i<ans.size();i++)
        {
            for(int j=i+1;j<ans.size();j++)
            {
//                 cout<<ans[i]<<" "<<ans[j]<<" "<<maxi<<endl;
//                 if(compare(ans[i],ans[j]))
//                 {
//                     if(compare(ans[i], maxi))
//                     {
//                         maxi=ans[i];   
//                     }
                    
//                 }
//                 else
//                 {
//                     if(compare(ans[j], maxi))
//                     {
//                         maxi=ans[j];   
//                     }
//                     // maxi=ans[j]
//                 }
                int x= ans[i].compare(ans[j]);
                if(x<=0)
                {
                    int y=maxi.compare(ans[j]);
                    if(y<=0)
                    {
                        maxi=ans[j];
                    }
                    
                }
                else
                {
                    int y=maxi.compare(ans[i]);
                    if(y<=0)
                    {
                        maxi=ans[i];
                    }
                }
            }
        }
        // cout<<compare("13325","13235")<<endl;
        return maxi;
    }
};