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
    void solve(TreeNode *root)
    {
        if(root==nullptr)
            return;
        ans.push_back(root->val);
        solve(root->left );
        //ans.push_back(root->val);
        solve(root->right);
        
    }
    int kthSmallest(TreeNode* root, int k) {
        //vector<int> ans;
        if((root->left == nullptr && root->right ==nullptr) && root!=nullptr)
            ans.push_back(root->val);
        int out=0;
        solve(root);
        sort(ans.begin(), ans.end());
        for(auto it: ans)
        cout<<it<<" ";
        cout<<endl;
        return ans[k-1];
    }
};