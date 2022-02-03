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
    void solve(TreeNode* root, int &maxi)
    {
        if(root==NULL)
        {
            return;
        }
        int x1=maxFinder(root);
        int x2=minFinder(root);
        maxi=max(maxi, max(abs(root->val-x1),abs(root->val-x2)));
        solve(root->left, maxi);
        solve(root->right,  maxi);
    }
    int maxAncestorDiff(TreeNode* root) {
        int maxi=-1;
        solve(root,maxi);
        return maxi;
    }
};