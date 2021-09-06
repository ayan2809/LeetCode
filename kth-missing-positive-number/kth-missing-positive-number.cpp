class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        // vector<int> ans;
        // int j=0;
        // for(int i=1;i<=2500;i++)
        // {
        //     if(arr.size()>k )
        //         break;
        //     if(j< arr.size())
        //     {
        //         if(i==arr[j]) 
        //         {
        //             j++;
        //             continue;
        //         }
        //     }
        //     ans.push_back(i);
        // }
        // // for(auto it: ans)
        // //     cout<<it<<" ";
        // return ans[k-1];
        for (int n = 1, i = 0; n <= 1000; ++n) {
        if (i < arr.size() && arr[i] == n)
            ++i;
        else if (--k == 0)
            return n;
        }
        return 1000 + k;
    }
};