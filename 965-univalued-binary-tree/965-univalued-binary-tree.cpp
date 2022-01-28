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
    void solve(TreeNode * root, int x, bool &ans)
    {
        if(root==NULL)
        {
            return;
        }
        if(root->val==x)
        {
            ans &=true;
        }
        if(root->val!=x)
        {
            ans&=false;
        }
        solve(root->left, x,ans);
        solve(root->right, x, ans);
    }
    bool isUnivalTree(TreeNode* root) {
        if(root==NULL)
            return false;
        int x=root->val;
        bool ans=true;
        solve(root, x, ans);
        return ans;
        
    }
};