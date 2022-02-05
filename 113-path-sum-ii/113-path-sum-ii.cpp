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
    void solve(TreeNode *root, vector<int> ans, int sum, vector<vector<int>> &out)
    {
        if(root==NULL)
        {
            return;
        }
        sum-=root->val;
    	ans.push_back(root->val);
        if(root->left ==NULL && root->right==NULL && sum==0)
        {
            out.push_back(ans);
        	// for(auto it: ans)
        	// cout<<it<<" ";
        	// cout<<endl;
        }
        
        solve(root->left, ans, sum, out);
        solve(root->right, ans, sum, out);
        
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        solve(root,{}, targetSum, ans);
        return ans;
    }
};