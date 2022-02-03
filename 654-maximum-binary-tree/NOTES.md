class Solution {
public:
TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
return constructMaximumBinaryTree(nums,0,nums.size()-1);
}
TreeNode* constructMaximumBinaryTree(vector<int>& nums,int start,int end) {
if(start>end) return nullptr;
int index=-1;
int val=-1;
for(int i=start;i<=end;i++){
if(nums[i]>val){
index=i;
val=nums[i];
}
}
TreeNode* root=new TreeNode(val);
root->left=constructMaximumBinaryTree(nums,start,index-1);
root->right=constructMaximumBinaryTree(nums,index+1,end);
return root;
}
};
​
​
​
TreeNode * solve(vector<int>& nums, int si, int ei)
{
if(si>ei)
return NULL;
// int mid= si+(ei-si)/2;
std::vector<int>::iterator it;
int maxi=*max_element(nums.begin()+si, nums.begin()+ei);
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