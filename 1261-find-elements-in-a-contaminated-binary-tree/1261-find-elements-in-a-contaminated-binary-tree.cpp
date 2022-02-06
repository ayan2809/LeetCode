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
class FindElements {
    TreeNode *rooter;
    int findElement=0;
    bool ans;
public:
    void construct(TreeNode* &root, int x)
    {
        if(root==NULL)
            return;
        // root->val=root->val*2+x;
        if(root->left!=NULL)
        {
            root->left->val=root->val*2 +1;
        }
        if(root->right!=NULL)
        {
             root->right->val=root->val*2 +2;
        }
        construct(root->left, 1);
        construct(root->right,2);
    }
    bool traverse(TreeNode * root, int x)
    {
        if(root==NULL)
            return false;
        if(root->val==x)
        {
            return true;
        }
        return traverse(root->left, x) || traverse(root->right, x);
        
    }
    void print(TreeNode * root)
    {
        if(root==NULL)
            return;
        print(root->left);
        cout<<root->val<<" ";
        print(root->right);
    }
    FindElements(TreeNode* &root) {
        root->val=0;
       construct(root, 0); 
        rooter=root;
        print(rooter);
    }
    
    
    bool find(int target) {
        // ans=traverse(rooter)
        
        return traverse(rooter,target );
    }
};
/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */