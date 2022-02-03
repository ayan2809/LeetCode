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
        if(s=="")
        {
            if(root->val<0)
            {
                int y=abs(root->val);
                string x= to_string(y);
                reverse(x.begin(), x.end());
                s=x+"-"+s;
            }
            else
            {
                string x=to_string(root->val);
                
                reverse(x.begin(), x.end());
                s=x+s;
            }
            
        }
        else
        {
            s=">-"+s;
            if(root->val<0)
            {
                int y=abs(root->val);
                string x= to_string(y);
                reverse(x.begin(), x.end());
                s=x+"-"+s;
            }
            else
            {
                string x=to_string(root->val);
                
                reverse(x.begin(), x.end());
                s=x+s;
            }
        }
        if(root->left ==NULL && root->right==NULL)
        {
            string x=s;
            reverse(x.begin(), x.end());
            ans.push_back(x);
        }
        
        solve(root->left, ans, s);
        solve(root->right, ans, s);
        
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>ans;
        solve(root, ans, "");
        return ans;
    }
};