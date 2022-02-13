class Solution {
public:
    vector<int> mostFrequent(vector<int> arr, int n)
    {
        // Insert all elements in hash.
        unordered_map<int, int> hash1;
        unordered_map<int, int> hash2;
        int hash1Size=0, hash2Size=0;
        for (int i = 0; i < n; i++)
        {
            if(i%2==0)
            {
                hash1Size++;
                hash1[arr[i]]++;      
            }
            if(i%2!=0)
            {
                hash2Size++;
                hash2[arr[i]]++;
            }
                  
            
        }
            // hash[arr[i]]++;
        vector<int> ans;
        // find the max frequency
        int max_count = 0, second_max=0, res1 = -1, res2=-1;
        for (auto i : hash1) 
        {
            
            if (max_count < i.second) 
            {
                second_max= max_count;
                res2=res1;
                res1 = i.first;
                max_count = i.second;
            }
            else if(i.second>=second_max)
            {
                second_max=i.second;
                res2=i.first;
            }
        }
        ans.push_back(res1);
        ans.push_back(max_count);
        ans.push_back(res2);
        ans.push_back(second_max);
        ans.push_back(hash1Size);
        
        max_count = 0, second_max=0, res1 = -1, res2=-1;
        
        for(auto i: hash2)
        {
             if (max_count < i.second) 
            {
                second_max= max_count;
                res2=res1;
                res1 = i.first;
                max_count = i.second;
            }
            else if(i.second>=second_max)
            {
                second_max=i.second;
                res2=i.first;
            }
        }
        
        ans.push_back(res1);
        ans.push_back(max_count);
        ans.push_back(res2);
        ans.push_back(second_max);
        ans.push_back(hash2Size);
        return ans;
    }
    int solve(vector<int> nums, int a, int b)
    {
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(i%2==0)
            {
                if(nums[i]!=a)
                count++;
            }
            if(i%2!=0)
            {
                if(nums[i]!=b)
                {
                    count++;
                }
            }
        }
        return count;
    }
    int minimumOperations(vector<int>& nums) {
        // if(nums.size()<=2)
        // {
        //     return 0;
        // }
        vector<int> x=mostFrequent(nums,nums.size());
        for (auto it: x)
        {
            cout<<it<<" ";
        }
        cout<<endl;
        int firstEven= x[0];
        int firstEvenCount=x[1];
        int firstOdd= x[5];
        int firstOddCount=x[6];
        int secondEven=x[2];
        int secondEvenCount=x[3];
        int secondOdd=x[7];
        int secondOddCount=x[8];
        int totalEven=x[4];
        int totalOdd=x[9];
        int operationsEven = 0, operationsOdd = 0;
        
        
        operationsEven = totalEven - firstEvenCount;
        
        if(firstEven!=firstOdd) operationsEven += (totalOdd - firstOddCount);
        else operationsEven += (totalOdd - secondOddCount);
        
        
        operationsOdd = totalOdd - firstOddCount;
        if(firstOdd!=firstEven) operationsOdd += (totalEven - firstEvenCount);
        else operationsOdd += (totalEven - secondEvenCount);
        
        
        return min(operationsEven, operationsOdd);
        
    }
};