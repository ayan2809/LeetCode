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
    vector<vector<int>> out;
    void solve(TreeNode *root, int k)
    {
        if(root==nullptr)
            return;
        if(k==out.size())
        {
            out.push_back({});
        }
        out[k].push_back(root->val);
        solve(root->left, k+1);
        solve(root->right, k+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        solve(root, 0);
        for(auto it: out)
            ans.push_back(it[it.size()-1]);
        return ans;
    }
};