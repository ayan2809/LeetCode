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
    int maxFinder(TreeNode *root)
    {
        if(root==NULL)
            return -1;
        int max= root->val;
        int lmax=maxFinder(root->left);
        int rmax= maxFinder(root->right);
        // int max=max(maxFinder(root->left), maxFinder(root->right));
        if(lmax>max)
            max=lmax;
        if(rmax>max)
            max=rmax;
        return max;
    }
    int minFinder(TreeNode *root)
    {
        if(root==NULL)
            return 100001;
        int min= root->val;
        int lmin=minFinder(root->left);
        int rmin= minFinder(root->right);
        // int max=max(maxFinder(root->left), maxFinder(root->right));
        if(lmin<min)
            min=lmin;
        if(rmin<min)
            min=rmin;
        return min;
    }
    void solve(TreeNode* root, int x, vector<int> &ans)
    {
        if(root==NULL)
        {
            return;
        }
        int x1=maxFinder(root);
        int x2=minFinder(root);
        ans.push_back(max(abs(root->val-x1),abs(root->val-x2)));
        
        solve(root->left, x, ans );
        solve(root->right, x, ans);
        // x=root->val;
    }
    int maxAncestorDiff(TreeNode* root) {
        vector<int> ans;
        solve(root,root->val, ans);
        // cout<<minFinder(root)<<endl;
        return *max_element(ans.begin(), ans.end());
    }
};