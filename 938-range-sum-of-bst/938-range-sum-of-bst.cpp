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
    void elementsInRangeK1K2(TreeNode* root, int k1, int k2, int &sum) {
        // Write your code here
        if(root==NULL)
            return;
        // cout<<root->data<<" ";


        if(root->val>k1)
        {
            elementsInRangeK1K2(root->left,k1,k2,sum);
            // elementsInRangeK1K2(root->right,k1,k2);
        }
        if(root->val>=k1 && root->val<=k2)
        {
            cout<<root->val<<" ";
            sum+=root->val;
        }

        if(root->val<k2)
        {
            elementsInRangeK1K2(root->right,k1,k2,sum);

        }
       

    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum=0;
        elementsInRangeK1K2(root, low, high, sum);
        return sum;
        
    }
};