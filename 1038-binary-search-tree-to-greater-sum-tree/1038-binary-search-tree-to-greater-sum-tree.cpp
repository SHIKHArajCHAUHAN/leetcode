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
    void fn(TreeNode *root,int &varsum)
    {
        if(root==NULL) return;
        fn(root->right,varsum);
        root->val= root->val+varsum;
        varsum=root->val;
        fn(root->left,varsum);
        
    }
    TreeNode* bstToGst(TreeNode* root) {
       int varsum=0;
        fn(root,varsum);
        return root;
    }
};