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
    vector<int> ans;
    void solve(TreeNode * root)
    {
        if(root==nullptr)
            return;
        ans.push_back(root->val);
        solve(root->left);
        solve(root->right);
        
    }
    int findSecondMinimumValue(TreeNode* root) {
        solve(root);
        long x=INT_MAX,y=INT_MAX,c=INT_MAX;
        x+=1;y+=1;c+=1;
        for(auto it: ans)
        {
            if(it<x)
            {
                y=x;
                x=it;
            }
            else if(it<y && it>x)
            {
                y=it;
            }
        }
        if(y==c)
            return -1;
        return y;
        
    }
};