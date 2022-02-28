class Solution {
public:
    
    vector<string> summaryRanges(vector<int>& nums) {
        if(nums.size()==0)
            return {};
        stack<int> x;
        vector<string> ans;
        int i=0;
        while(i!=nums.size())
        {
            cout<<to_string(nums[i])<<endl;
            if(x.empty())
            {
                x.push(nums[i]);
            }
            else if(abs(abs(nums[i])-abs(x.top()))==1 && x.size()==1)
            {
                x.push(nums[i]);
            }
            else if(abs(abs(nums[i])-abs(x.top()))==1 && x.size()>1)
            {
                x.pop();
                x.push(nums[i]);
            }
            else
            {
                string st="";
                vector<int> x2;
                while(!x.empty())
                {
                    x2.push_back(x.top());
                    x.pop();
                    
                }
                for(int i=x2.size()-1;i>=0;i--)
                {
                    if(st=="")
                    {
                        st+=to_string(x2[i]);
                        // x.pop();
                    }
                    else
                    {
                        st+="->";
                        st+=to_string(x2[i]);
                        // x.pop();
                    }
                }
                x.push(nums[i]);
                // reverse(st.begin(), st.end());
                ans.push_back(st);
            }
            i++;
            
        }
        if(!x.empty())
        {
            string st="";
            vector<int> x2;
            while(!x.empty())
            {
                x2.push_back(x.top());
                x.pop();    
            }
            for(int i=x2.size()-1;i>=0;i--)
            {
                if(st=="")
                {
                    st+=to_string(x2[i]);
                    // x.pop();
                }
                else
                {
                    st+="->";
                    st+=to_string(x2[i]);
                    // x.pop();
                }
            }
            // x.push(nums[i]);
            // reverse(st.begin(), st.end());
            ans.push_back(st);
        }
        return ans;
    }
};