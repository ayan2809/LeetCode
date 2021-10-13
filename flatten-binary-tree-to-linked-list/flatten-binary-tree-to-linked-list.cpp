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
    vector<int> out;
    void solve(TreeNode * root)
    {
        if(root==nullptr)
        {
            return;
        }   
        out.push_back(root->val);
        solve(root->left);
        solve(root->right);
        
    }
    void display(TreeNode * root)
    {
        if(root==nullptr)
        {
            return;
        }   
        cout<<root->val<<" ";
        solve(root->left);
        solve(root->right);
        
    }
    void flatten(TreeNode* root) {
        solve(root);
        TreeNode *q=root, * p=nullptr;
        int f=0;
        //q=root;
        if(root==nullptr)
            return;
        q->left=nullptr;
        for(int i=1;i<out.size();i++)
        {
            q->right = new TreeNode(out[i]);
            q->left = nullptr;
            q = q->right;
        }
        //display(p);
    }
};