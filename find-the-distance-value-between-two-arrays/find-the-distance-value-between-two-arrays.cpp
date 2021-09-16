class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int count=0;
        for(auto it: arr1)
        {
            int f=1;
            for(auto itr: arr2)
            {
                int a=abs(itr-it);
                if(a<=d)
                {
                    f=0;
                    break;
                }
                    
            }
            if(f)
            {
                count++;
            }
                
        }
        return count;
    }
};