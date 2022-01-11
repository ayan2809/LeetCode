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
    void calculate(vector <string> & output, TreeNode *root,string sum)
    {
        if(root==nullptr)
            return;
        if(root->left==NULL && root->right==NULL)
        {
            sum+=to_string(root->val);
            output.push_back(sum);
            sum="";
        }
        else
        {
            calculate(output,root->left,sum+to_string(root->val));
            calculate(output,root->right,sum+to_string(root->val));
        }
    }
    int sumRootToLeaf(TreeNode* root) {
        vector <string> output;
        string sum="";
        calculate(output,root,sum);
        int out=0;
        for(int i=0;i<output.size();i++)
        {

            out+=stoi(output[i],0,2);
        }
        return out;
    }
};