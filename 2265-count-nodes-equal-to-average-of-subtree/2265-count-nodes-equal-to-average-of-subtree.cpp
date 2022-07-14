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
    int ans=0;
    pair<int, int> solve(TreeNode *root)
    {
        if(root==nullptr)
            return {0,0};
        auto left= solve(root->left);
        auto right=solve(root->right);
        int sum=left.first+right.first+root->val;
        int n=left.second+right.second+1;
        if(sum/n==root->val)
            ans+=1;
        return {sum, n};
           
    }
    int averageOfSubtree(TreeNode* root) {
        auto it= solve(root);
        return ans;
    }
};