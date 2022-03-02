class Solution {
public:
    string datee(string word1)
    {
        string ans="";
        for(auto it: word1)
        {
            if(it>=48 && it<=57)
                ans+=it;
            else
                break;
        }
        int i=stoi(ans);
        if(i<=9)
            return "0"+ans;
        return ans;
    }
    string month(string word2)
    {
        vector<string> x={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec" };
        for(int i=1;i<=x.size();i++)
        {
            if(word2==x[i-1])
            {
                string ans=to_string(i);
                if(i<=9)
                    return "0"+ans;
                else
                    return ans;
            }
        }
        return "";
    }
    string reformatDate(string date) {
        string word1="", word2="", word3="";
        int count=0;
        for(int i=0;i<date.size();i++)
        {
            if(date[i]!=' ' && count==0)
            {
                word1+=date[i];
                // count++;
            }
            if(date[i]!=' '&& count ==1)
            {
                word2+=date[i];
            }
            if(date[i]!=' ' && count==2)
            {
                word3+=date[i];
            }
            if(date[i]==' ')
                count++;
            
            
        }
        return word3+"-"+month(word2)+"-"+datee(word1);
        // cout<<datee(word1)<<" "<<month(word2)<<" "<<word3<<endl;
        // return "";
    }
};