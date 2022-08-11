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
public: TreeNode *bst(vector<int>&nums, int start,int end)
{
    //sort(nums.begin(),nums.end());
    if(start>end) return NULL;
    if(start==end) return new TreeNode(nums[start]);
    int mid=max_element(nums.begin()+start,nums.begin()+end+1)-nums.begin();
    TreeNode *root=new TreeNode(nums[mid]);
    root->left=bst(nums,start,mid-1);
    root->right=bst(nums,mid+1,end);
    return root;
}
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
       return( bst(nums,0,nums.size()-1));
        
    }
};