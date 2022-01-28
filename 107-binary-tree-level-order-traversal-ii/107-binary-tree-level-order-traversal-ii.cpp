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
    int height(TreeNode* root) 
    {
        if(root==NULL)
            return 0;
        return max(height(root->left)+1, height(root->right)+1);
    }
    
    vector<vector<int>> levelOrderBottom(TreeNode* root) 
    {
        // int k=height(root);
        solve(root, 0);
        reverse(res.begin(), res.end());
        return res;
    }
};