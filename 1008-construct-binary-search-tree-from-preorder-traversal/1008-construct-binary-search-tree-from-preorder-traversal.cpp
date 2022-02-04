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
    TreeNode * solve(vector<int>& nums, int si, int ei)
    {
        if(si>ei)
            return NULL;
        int mid=si;
        TreeNode * temp = new TreeNode(nums[mid]);
        
        // cout<<nums[si]<<" ";
        for(int i=mid+1;i<=ei;i++)
        {
            if(temp->val>nums[i])
            {
                mid=i;
                
            }
            else
            {
                break;
            }
        }
        // if(mid==-1)
        //     return NULL;
        cout<<si<<" "<<ei<<" "<<mid<<endl;
        // if(mid!=si)
        temp->left=solve(nums, si+1, mid);
        
        temp->right=solve(nums, mid+1, ei);
        return temp;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        // sort(preorder.begin(), preorder.end());
        return solve(preorder, 0, preorder.size()-1);
        
    }
};