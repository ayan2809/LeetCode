class Solution {
public:
    double average(vector<int>& salary) {
        double ans=0;
        int maxi= *max_element(salary.begin(), salary.end());
        int mini = *min_element(salary.begin(), salary.end());
        for(auto it: salary)
        {
            if(it!=mini && it != maxi)
            {
                // cout<<it<<" "<<maxi<<" "<<mini<<endl;
                ans+=it;
            } 
            // if(it != maxi )
            // {
            //     ans+=it;
            // }
        }
        int len= salary.size()-2;
        cout<<mini<<" "<<maxi<<endl;
        return ans/len;
    }
};