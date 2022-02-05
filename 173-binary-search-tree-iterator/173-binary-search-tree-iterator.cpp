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
class BSTIterator {
    vector<int> x;
    int pointer;
    void checker(TreeNode * root)
    {
        if(root==NULL)
            return;
        checker(root->left);
        x.push_back(root->val);
        checker(root->right);
        
    }
public:
    BSTIterator(TreeNode* root) {
        checker(root);
        for(auto it: x)
            cout<<it<<" ";
        pointer=0;
    }
    
    int next() {
        return x[(pointer++)];
        // return 0;
    }
    
    bool hasNext() {
        if(pointer==x.size())
            return false;
        return true;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */