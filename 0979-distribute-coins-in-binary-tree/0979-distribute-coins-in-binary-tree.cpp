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
public:int steps=0;
    int fn(TreeNode*root)
    {
        if(root==nullptr) return 0;
        int l=fn(root->left);
        int r=fn(root->right);
        steps+=abs(l)+abs(r);
        return (l+r+root->val-1);
    }
    int distributeCoins(TreeNode* root) {
       fn(root);
        return steps;
    }
};