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
    void solve(TreeNode *root, int target, bool &ans)
    {
        if(root==NULL)
        {
            // ans |=false;
            return;
        }
        target-=root->val;
        cout<<target<<endl;
        if(target==0 && root->left ==NULL && root->right==NULL)
        {
            cout<<"Helloo";
            ans |= true;
        }
        
        solve(root->left, target, ans);
        solve(root->right, target, ans);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        bool ans=false;
        solve(root, targetSum, ans);
        return ans;
    }
};