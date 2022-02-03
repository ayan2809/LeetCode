class Solution {
public:
    TreeNode * solve(vector<int>& nums, int si, int ei)
    {
        if(si>ei)
            return NULL;
        // int mid= si+(ei-si)/2;
        std::vector<int>::iterator it;
        int maxi=*max_element(nums.begin()+si, nums.begin()+ei+1);
        cout<<maxi<<endl;
        it= find(nums.begin(), nums.end(), maxi);
        int mid=it-nums.begin();
        // cout<<si<<" "<<ei<<" "<<mid<<endl;
        TreeNode * temp = new TreeNode(nums[mid]);
        temp->left=solve(nums, si, mid-1);
        temp->right=solve(nums, mid+1, ei);
        return temp;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return solve(nums, 0, nums.size()-1);
    }
};
