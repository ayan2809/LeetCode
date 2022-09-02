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
        
    }
    vector<double> averageOfLevels(TreeNode* root) {
        solve(root, 0);
        vector<double> ans;
        for(auto it: res)
        {
            double sum=0;
            for(auto itr: it)
            {
                sum+=itr;
                cout<<itr<<" ";
            }
            cout<<endl;
            sum/=it.size();
            ans.push_back(sum);
        }
        
        return ans;
    }
};