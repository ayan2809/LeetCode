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
        // for(int i=0;i<root->children.size();i++)
        // {
        //     solve(root->children[i],k+1);
        // }
    }
    int maxLevelSum(TreeNode* root) {
        solve(root, 0);
        vector<int> ans;
        int maxi=INT_MIN;
        int out=0;
        for(int i=0;i<res.size();i++)
        {
            int sum=0;
            for(auto itr: res[i])
            {
                sum+=itr;
                // cout<<itr<<" ";
            }
            if(sum>maxi)
            {
                maxi=sum;
                out=i;
            }
            // cout<<endl;
            // sum/=it.size();
            ans.push_back(sum);
        }
        
        return out+1;
    }
};