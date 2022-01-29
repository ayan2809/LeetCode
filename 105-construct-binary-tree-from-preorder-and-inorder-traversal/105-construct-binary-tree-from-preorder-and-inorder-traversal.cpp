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
    TreeNode * solve(vector<int> preorder, vector<int> inorder, int &index,int i, int length)
    {
        if(i>length)
            return NULL;
        int x=i;
        while(inorder[x]!=preorder[index])
            x++;
        
        TreeNode *ans= new TreeNode(preorder[index]);
        index++;
        ans->left=solve(preorder, inorder, index, i, x-1);
        ans->right=solve(preorder, inorder, index, x+1,length);
        return ans;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int length=preorder.size();
        int index=0;
        TreeNode * ans=solve(preorder, inorder, index, 0, length-1);
        return ans;
    }
};