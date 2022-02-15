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
    vector<int> nums;
public:
    void traverse(TreeNode * root)
    {
        if(root==NULL)
            return;
        nums.push_back(root->val);
        traverse(root->left);
        traverse(root->right);
    }
    void solve(TreeNode* &root)
    {
        if(root==NULL)
            return;
        int sum=0;
        for(auto it: nums)
        {
            if(it>=root->val)
                sum+=it;
        }
        root->val=sum;
        solve(root->left);
        solve(root->right);
    }
    TreeNode* convertBST(TreeNode* root) {
        if(root==NULL)
            return NULL;
        traverse(root);
        solve(root);
        return root;
    }
};