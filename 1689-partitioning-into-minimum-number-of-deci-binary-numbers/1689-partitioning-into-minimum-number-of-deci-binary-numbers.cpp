class Solution {
public:
    int minPartitions(string n) {
        int x=0;
        for(auto it: n)
        {
            x=max(x,it-'0');
        }
        return x;
    }
};