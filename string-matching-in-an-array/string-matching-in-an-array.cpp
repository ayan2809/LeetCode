class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> output;
        for(int i=0;i<words.size();i++)
        {
            int f=0;
            for(int j=0;j<i;j++)
            {
                if(words[j].find(words[i])!=-1)
                {
                    f++;
                    break;
                }
            }
            if(f==1)
            {
                output.push_back(words[i]);
                continue;
            }
            for(int j=i+1;j<words.size();j++)
            {
                if(words[j].find(words[i])!=-1)
                {
                    f++;
                    break;
                }
            }
            if(f==1)
            {
                output.push_back(words[i]);
                //continue;
            }
        }
        return output;
    }
};