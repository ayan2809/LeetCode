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

    int getSum(TreeNode* root) {
    if(root==NULL)
        return 0;
    int sum=0;
    sum+=root->val;
    sum+=getSum(root->left)+getSum(root->right);
    return sum;
    // Write your code here
    }
    void solve(TreeNode* root, vector<int> &ans)
    {
        if(root==NULL)
        {
            return;
        }
        int x=getSum(root);
        ans.push_back(x);
        solve(root->left, ans);
        solve(root->right, ans);
    }
    vector<int> findFrequentTreeSum(TreeNode* root) {
        vector<int> ans;
        solve(root, ans);
        map<int, int> umap;
        for(auto it: ans)
        {
            umap[it]+=1;
        }
        int maxi=-1;
        for(auto it: umap)
        {
            // cout<<it.first<<" ";
            maxi=max(maxi, it.second);
        }
        ans={};
        for(auto it: umap)
        {
            if(it.second==maxi)
            {
               ans.push_back(it.first); 
            }
        }
        return ans;
    }
};