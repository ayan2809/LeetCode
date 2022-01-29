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
    void solve(TreeNode *root,vector<string> &ans, string s)
    {
        if(root==NULL)
        {
            return;
        }
        s+=root->val+'a';
        if(root->left ==NULL && root->right==NULL)
        {
            string x=s;
            reverse(x.begin(), x.end());
            ans.push_back(x);
        }
        
        solve(root->left, ans, s);
        solve(root->right, ans, s);
        
    }
    string smallestFromLeaf(TreeNode* root) {
        vector<string> ans;
        string s;
        solve(root, ans, s);
        sort(ans.begin(), ans.end());
        return ans[0];
        // for(auto it: ans)
        // {
        //     cout<<it<<" ";
        // }
        // string out="";
        // return out;
    }
};