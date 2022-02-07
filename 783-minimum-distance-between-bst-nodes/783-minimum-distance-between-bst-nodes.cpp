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
    int mini(TreeNode * root)
    {
        if(root==NULL)
        {
            return INT_MAX;
        }
        int x= root->val;
        int y= root->val;
        x=min(x, mini(root->left));
        y= min(y, mini(root->right));
        return min(x,y);
    }
    int maxi(TreeNode * root)
    {
        if(root==NULL)
        {
            return INT_MIN;
        }
        int x= root->val;
        int y= root->val;
        x=max(x, maxi(root->left));
        y= max(y, maxi(root->right));
        return max(x,y);
    }
    void solve(TreeNode *root, int &ans)
    {
        if(root==NULL)
            return;
        int x=INT_MAX;
        int y=INT_MAX;
        if(root->left!=NULL)
        x= maxi(root->left);
        if(root->right!=NULL)
        y= mini(root->right);
        // cout<<x<<" "<<y<<endl;
        // x=(x, y);
        ans=min(ans, min(abs(root->val-x), abs(root->val-y)));
        cout<<root->val<<" "<<ans<<endl;
        solve(root->left, ans);
        solve(root->right, ans);
    }
    int minDiffInBST(TreeNode* root) {
        int ans=INT_MAX;
        solve(root, ans);
        return ans;
    }
};