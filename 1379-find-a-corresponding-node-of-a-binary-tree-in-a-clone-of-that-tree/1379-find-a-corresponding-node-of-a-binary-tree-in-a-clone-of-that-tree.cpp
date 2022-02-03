/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
    // TreeNode *ans;
public:
    void solve(TreeNode* &root, TreeNode* target, TreeNode* &ans)
    {
        if(root==NULL)
            return;
        cout<<root->val<<" ";
        if(root->val==target->val)
        {
            ans=root;
            return;
        }
        solve(root->left, target,ans);
        solve(root->right, target,ans);
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        TreeNode *ans;
        solve(cloned, target,ans );
        // cout<<target->val;
        
        return ans;
    }
};