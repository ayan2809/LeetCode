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
public:
    int maxDepth(Node* root) {
        if(root==NULL)
            return 0;
        int x=1;
        for(int i=0;i<root->children.size();i++)
        {
            x=max(x, maxDepth(root->children[i])+1);
        }
        return x;
    }
};