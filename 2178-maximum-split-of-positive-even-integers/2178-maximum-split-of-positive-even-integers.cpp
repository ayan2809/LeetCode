class Solution {
public:
    vector<long long> maximumEvenSplit(long long finalSum) {
        vector<long long> ans;
        if(finalSum%2==0)
        {
            int j=0;
            for(long long i=2;finalSum>0;i+=2)
            {
                if(i>finalSum)
                {
                    ans[ans.size()-1]+=finalSum;
                    finalSum=0;
                    break;
                    
                }
                finalSum-=i;
                ans.push_back(i);
                
                
            }

               
            
        }
        // int x=ans.size()-1;
        // cout<<x<<endl;
        // cout<<ans[x]<<endl;
        // cout<<ans[ans.size()-1]<<endl;
        // int sum=0;
        // for(auto it: ans)
        //     sum+=it;
        // cout<<sum<<endl;
        if(finalSum==0)
            return ans;
        return {};
        
    }
};