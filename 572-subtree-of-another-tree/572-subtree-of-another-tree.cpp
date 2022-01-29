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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // cout<<p->val<<" "<<q->val<<endl;
    if(p==NULL && q==NULL)
        return true;
    if(p==NULL)
        return false;
    if(q==NULL)
        return false;
    if(p->val!=q->val)
        return false;
        
    bool ans=true;
        
//     conditions
    if(p->left!=NULL && q->left!=NULL)
    {
        ans &= isSameTree(p->left, q->left);
    }
    else if(p->left==NULL && q->left !=NULL || p->left!=NULL && q->left ==NULL )
        return false;
    if(p->right!=NULL && q->right!=NULL)
    ans &= isSameTree(p->right, q->right);
    else if(p->right==NULL && q->right !=NULL || p->right!=NULL && q->right ==NULL )
        return false;
     
    
    return ans;
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root==NULL)
            return false;
        cout<<root->val<<endl;
        bool ans= isSameTree(root, subRoot);
        ans |= isSubtree(root->left, subRoot);
        ans |= isSubtree(root->right, subRoot); 
        return ans;
        
    }
};