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
    TreeNode * solve(vector<int>& nums, int si, int ei)
    {
        if(si>ei)
            return NULL;
        int mid= si+(ei-si)/2;
        TreeNode * temp = new TreeNode(nums[mid]);
        temp->left=solve(nums, si, mid-1);
        temp->right=solve(nums, mid+1, ei);
        return temp;
    }
    void treeMaker(TreeNode *root, vector<int> &nums)
    {
        if(root==NULL)
            return;
        treeMaker(root->left,nums);
        nums.push_back(root->val);
        treeMaker(root->right,nums);
        
    }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> nums;
        treeMaker(root, nums);
        return solve(nums,0, nums.size()-1);
    }
};