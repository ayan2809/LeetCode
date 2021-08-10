class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int one=0;
        int zero=0;
        for(auto i:s)
        {
            if(i=='0')
                zero++;
            else
                one++;
            zero=min(zero,one);
            //cout<<zero<<" ";
        }
        //cout<<endl;
        return zero;
    }
};