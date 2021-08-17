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
    int out=0;
    void solve(TreeNode *root,int y)
    {
        if(root==nullptr)
        {
            return;
        }
        if(root->val>=y)
        {
            y=max(root->val,y);
            out++;
        }
        solve(root->left, y);
        solve(root->right,y);
    }
    int goodNodes(TreeNode* root) {
        solve(root, root->val);
        return out;
    }
};