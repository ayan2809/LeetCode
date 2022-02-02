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
    TreeNode* tree(vector<int>& postorder, vector<int>& inorder,int ps,int pe, int is, int ie)
    {
        if(ps>pe)
            return NULL;


        TreeNode* root=new TreeNode(postorder[pe]);

         int k = 0; 
        for(int i = is; i <= ie; i++)
        { if(postorder[pe] == inorder[i])
            { k = i; break; } 
        }

        int lps=ps;    //left prestart
        int lis=is;  //left instart
        int  lie=k-1;   //left inend
        int lpe= lie-lis+lps; //left  pre end

        int rps=lpe+1; //right prestart
        int rpe=pe-1;//  right preend
        int ris=k+1;  //right instart
        int rie=ie;   //right inend

        root->left=tree(postorder,inorder,lps,lpe,lis,lie);
        root->right=tree(postorder,inorder,rps,rpe,ris,rie);

        return root;


    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int postLength=postorder.size();
        int inLength= inorder.size();
        return tree (postorder,inorder,0,postLength-1,0,inLength-1);
    }
};