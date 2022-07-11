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
    int cal_H(TreeNode*root){
        if(root==NULL) return 0;
        return max(cal_H(root->left),cal_H(root->right))+1;
    }    
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL) return 0;
        int lh=cal_H(root->left);
        int rh=cal_H(root->right);
        int curdia=lh+rh;
        int ld=diameterOfBinaryTree(root->left);
        int rd=diameterOfBinaryTree(root->right);
        return max(curdia,max(ld,rd));
    }
};