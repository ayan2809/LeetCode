/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> res;
public:
    void solve(TreeNode *root, int k)
    {
        if(root==NULL)
            return;
        if(k==res.size())
        {
            res.push_back({});
        }
        res[k].push_back(root->val);
        solve(root->left,k+1);
        solve(root->right, k+1);
    }
    int maxDepth(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        return max(maxDepth(root->left)+1,maxDepth(root->right)+1);
    }
    bool decreasingCheck(vector<int> nums)
    {
        int x=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>=x)
            {
                return false;
            }
            x=nums[i];
        }
        
        return true;
    }
    bool increasingCheck(vector<int> nums)
    {
        int x=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]<=x)
            {
                return false;
            }
            x=nums[i];
        }
        return true;
    }
    bool isEvenOddTree(TreeNode* root) {
        int k=maxDepth(root);
        // cout<<k<<endl;
        solve(root, 0);
        int ans=0;
        for(int i=0;i<k;i++)
        {
            auto it=res[i];
            int count1=0,count2=0;
            for(auto itr: it)
            {
                if(itr%2!=0)
                {
                    count1++;
                }
                else
                {
                    count2++;
                }
            }
            // cout<<count1<<" "<<count2<<" "<<it.size()<<endl;
            if(count1==it.size() &&  i%2==0 && increasingCheck(it)==true)
            {
                ans++;
            }
            if(count2==it.size() && i%2!=0 && decreasingCheck(it)==true)
            {
                ans++;
            }
        }
        cout<<ans<<" "<<k<<endl;
        if(ans==k)
            return true;
        return false;
    }
};