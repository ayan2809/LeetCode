class Solution {
public:
    bool digitCount(string num) {
        map<int, int> umap;
        for(int i=0;i<num.length();i++)
        {
            cout<<num[i]-'0'<<endl;
            umap[num[i]-'0']+=1;
        }
        for(int i=0;i<num.length();i++){
            int x = num[i] - '0'; 
            if(umap[i] != x)
                return false;
        }
        return true;
    }
};