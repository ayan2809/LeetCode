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
    int countNodes(TreeNode* root) {
        if(root==NULL)
        {
            return 0;
        }
        int count=0;
        
        if(root->left==NULL && root->right==NULL)
        {
            cout<<root->val<<" ";
            count+=1;
        }
        else if(root->left!=NULL || root->right !=NULL)
        {
            cout<<root->val<<" ";
            count+=1;
        }
        count+= countNodes(root->left)+countNodes(root->right);
        return count;
    }
};