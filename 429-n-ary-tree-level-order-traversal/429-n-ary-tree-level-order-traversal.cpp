/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
    vector<vector<int>> res;
public:
    void solve(Node *root, int k)
    {
        if(root==NULL)
            return;
        if(k==res.size())
        {
            res.push_back({});
        }
        res[k].push_back(root->val);
        for(int i=0;i<root->children.size();i++)
        {
            solve(root->children[i],k+1);
        }
    }
    vector<vector<int>> levelOrder(Node* root) {
        solve(root,0);
        return res;
    }
};