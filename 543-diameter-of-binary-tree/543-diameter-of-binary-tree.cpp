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
    int heightOfTree(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        return 1+max(heightOfTree(root->left),heightOfTree(root->right));
    }

    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL)
		return 0;

        int ans1=heightOfTree(root->left)+heightOfTree(root->right);
        int ans2=diameterOfBinaryTree(root->left);
        int ans3=diameterOfBinaryTree(root->right);
        return max(ans1,max(ans2, ans3));
    }
};