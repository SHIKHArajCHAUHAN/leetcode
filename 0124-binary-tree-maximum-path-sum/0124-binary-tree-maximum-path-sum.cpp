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
    int ans=INT_MIN;
     int fn(TreeNode* root){
        if(!root) return 0;
        int ls = fn(root->left);
        int rs = fn(root->right);
        int temp = max(root->val,max(ls,rs)+root->val);
        ans = max(ans,max(temp,ls+rs+root->val));
        return temp;

    }
    int maxPathSum(TreeNode* root) {
       fn(root);
        return ans;
    }
};