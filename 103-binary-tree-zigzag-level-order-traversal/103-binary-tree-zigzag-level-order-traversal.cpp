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
vector<vector<int>> res;
public:
    void solve(TreeNode *root, int k)
    {
        if(root==NULL)
            return;
        if(k==res.size())
        {
            res.push_back({});
        }
        if(k%2==0)
        res[k].push_back(root->val);
        else
        {
            res[k].insert(res[k].begin() + 0, root->val);
        }
        solve(root->left,k+1);    
        solve(root->right, k+1); 
        

    
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        solve(root,0);
        return res;
    }
};