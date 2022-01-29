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
    TreeNode * solve(vector<int> preorder, vector<int> inorder, int &index,int i, int length)
    {
        if(i>length)
            return NULL;
        int x=i;
        while(inorder[x]!=preorder[index])
            x++;
        
        TreeNode *ans= new TreeNode(preorder[index]);
        index++;
        ans->left=solve(preorder, inorder, index, i, x-1);
        ans->right=solve(preorder, inorder, index, x+1,length);
        return ans;
    }
    
    TreeNode *buildTreeHelper(vector<int> pre, vector <int> in, int inS, int inE, int preS, int preE)
{
	if(inS>inE)
	{
		return NULL;
	}

	int rootData= pre[preS];
	// cout<<rootData<<endl;
	int rootIndex=-1;
	for(int i=inS;i<=inE;i++)
	{
		if(in[i]==rootData)
		{
			rootIndex=i;
			break;	
		}
	}
	int lInS=inS;
	int lInE= rootIndex-1;
	int lPreS= preS + 1;
	int lPreE= lInE - lInS+lPreS;
	int rPreS=lPreE+1;
	int rPreE=preE;
	int rInS= rootIndex+1;
	int rInE= inE;
	TreeNode* root= new TreeNode(rootData);
	root->left=buildTreeHelper(pre, in, lInS, lInE, lPreS, lPreE);
	root->right=buildTreeHelper(pre, in, rInS, rInE, rPreS, rPreE);
	return root;
}
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int length=preorder.size();
        int index=0;
        TreeNode * ans=buildTreeHelper(preorder, inorder, 0, length-1, 0, length-1);
        return ans;
    }
};