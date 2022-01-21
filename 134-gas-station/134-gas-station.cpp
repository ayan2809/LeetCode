class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n= gas.size();
        int total_gas=0;
        int total_cost=0;
        for(auto it: gas)
            total_gas+=it;
        for(auto it: cost)
            total_cost+=it;
        if(total_gas<total_cost)
            return -1;
        int ans=0,fuel=0;
        for(int i=0;i<n;i++)
        {
            if(fuel<0)
            {
                ans=i;
                fuel=0;
            }
            fuel+=gas[i];
            fuel-=cost[i];
        }
        return ans;
    }
};