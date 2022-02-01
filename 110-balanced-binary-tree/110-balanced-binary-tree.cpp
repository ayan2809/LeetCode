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
    bool isBalanced(TreeNode* root) {
        if(root==NULL)
            return 1;
        int leftHeight=heightOfTree(root->left);
        int rightHeight=heightOfTree(root->right);
        if(abs(leftHeight-rightHeight)<=1 && isBalanced(root->left) && isBalanced(root->right))
        {
            return 1;
        }
        return 0;
        
    }
};