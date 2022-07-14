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
    int sum=0;
    int rangeSumBST(TreeNode* root, int low, int high) {
///can be solved by common ancestor
      // int sum=0;
        if(root==NULL) return 0;
        if(low<root->val)
          rangeSumBST(root->left,low,high);
        if(high>root->val)
            rangeSumBST(root->right,low,high);
        if(root->val>=low && root->val<=high)
         sum+=root->val;
        return sum+=0;
    }
};