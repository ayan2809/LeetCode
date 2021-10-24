class OrderedStream {
public:
    string dp[1005];
    int ptr;
    OrderedStream(int n) {
        ptr=1;
    }
    vector<string> insert(int id, string value) {
        dp[id]=value;
        if(dp[ptr]!=""){
            vector<string> ans;
            for(int i=ptr;i<=1005;i++){
                if(dp[i]!="") {
                    ans.push_back(dp[i]);
                    ptr=i+1;
                }
                else break;
            }
            return ans;
        }
        return {};
    }
};