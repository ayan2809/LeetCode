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
        res[k].push_back(root->val);
        solve(root->left,k+1);
        solve(root->right, k+1);
    }
    int deepestLeavesSum(TreeNode* root) {
        solve(root,0);
        int sum=0;
        for(auto itr:res[res.size()-1])
        {   
            sum+=itr;
                // cout<<itr<<" ";
        }
            cout<<endl;
        return sum;
    }
};