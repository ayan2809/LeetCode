class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans=numBottles, empty=numBottles;
        while(numBottles>=numExchange)
        {
            // cout<<numBottles<<" "<<numExchange<<endl;
            if(empty==0){
                ans=numBottles;
                empty=numBottles;
            }
            else
            {
                int f=empty;
                ans+=f/numExchange;
                empty=f/numExchange;
                empty+=f%numExchange;
            }
            numBottles=empty;
        }
        return ans;
    }
};