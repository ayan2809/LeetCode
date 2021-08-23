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
    map<int, int> umap;
    void solve(TreeNode *root)
    {
        if(root==nullptr)
        {
            return;
        }
        umap[root->val]+=1;
        solve(root->left);
        solve(root->right);
        
    }
    bool findTarget(TreeNode* root, int k) {
        
        solve(root);
        for(auto it: umap)
        {
            int x=k-it.first;
            if(umap.find(x)!=umap.end() && x!=it.first)
                return true;
            //umap[nums[i]]=i;
        }
        return false;
    }
};