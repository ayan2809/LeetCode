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
            // ans.push_back(s);
            return;
        }
        s+=root->val+'0';
        // string s1=s;
        // string s2=s;
        if(root->left ==NULL && root->right==NULL)
        {
            ans.push_back(s);
        }
        // if(root->left)
        // {
        //    s1+=root->left->val+'0';
        //     solve(root->left, ans, s1);
        // }
        // if(root->right)
        // {
        //     s2+=root->right->val+'0';
        //     solve(root->right, ans, s2);
        // }
        solve(root->left, ans, s);
        solve(root->right, ans, s);
        
    }
    int sumNumbers(TreeNode* root) {
        vector<string> ans;
        solve(root, ans, "");
        int sum=0;
        for(auto it: ans)
            sum+=stoi(it);   
        return sum;
    }
};