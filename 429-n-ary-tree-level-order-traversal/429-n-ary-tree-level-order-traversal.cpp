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
    int checkLevel(Node *root)
    {
        if(root==NULL)
            return 0;
        int ans=1;
        for(int i=0;i<root->children.size();i++)
        {
            ans+=checkLevel(root->children[i])+1;
        }
        return ans;
    }
    void TLEoption(Node *root, int k,vector<int>&ans)
    {
        // vector<int> ans;
        if(k==0)
            ans.push_back(root->val);
        for(int i=0;i<root->children.size();i++)
        {
            TLEoption(root->children[i],k-1,ans);
        }
        // return ans;
    }
    vector<vector<int>> levelOrder(Node* root) {
        int len=checkLevel(root);
        cout<<len<<endl;
        
        vector<vector<int>> ans;
        if(len==0)
            return ans;
        
        for(int i=0;i<=len;i++)
        {
            vector<int>x;
            TLEoption(root, i,x);
            if(x.size()!=0)
            ans.push_back(x);
        }
        
        // queue <Node*> q;
        // q.push(root);
        // while(q.size()!=0)
        // {
        //     Node* front = q.front();
        //     cout<<front->val<<":";
        //     int n=front->children.size();
        //     vector<int> x;
        //     for(int i=0;i<front->children.size();i++)
        //     {
        //         q.push(front->children[i]);
        //         x.push_back(front->children[i]->val);
        //     }
        //     q.pop();
        //     if(x.size()==0)
        //         continue;
        //     ans.push_back(x);
        //     // cout<<endl;
        // }
        return ans;
    }
};