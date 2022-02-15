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
    int maxDepth(TreeNode* root) {
        if(root==NULL)
        {
            return 0;
        }
        return max(maxDepth(root->left)+1, maxDepth(root->right)+1);
    }
    vector<int> largestValues(TreeNode* root) {
        solve(root, 0);
        // cout<<x<<endl;
        vector<int>nums;
        for(auto it: res)
        {
            nums.push_back(*max_element(it.begin(), it.end()));
        }
        return nums;
    }
};