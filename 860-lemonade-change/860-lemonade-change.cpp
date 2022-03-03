class Solution {
public:
    
    bool lemonadeChange(vector<int>& bills) {
        int r[3] ={0,0};  // 5 10
        
        for(int i=0; i<bills.size(); i++) {
            if(bills[i] ==  5)
                r[0]++;
            
            else if(bills[i] == 10) {
                r[0]--;
                r[1]++;
            }
            
            else if(bills[i] == 20) {
                if(r[1] <= 0)
                    r[0] -= 3;
                else {
                    r[1]--;
                    r[0]--;
                }
            }
                            
            if(r[0] < 0 || r[1] < 0)
                return false;
        }
        
        return true;
    }
};