/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL) return NULL;
        if(root->val==p->val||root->val==q->val) return root;
        TreeNode* l_lca=lowestCommonAncestor(root->left,p,q);
        TreeNode *r_lca=lowestCommonAncestor(root->right,p,q);
        if(l_lca&&r_lca) return root;
        if(l_lca !=NULL) return l_lca;
        return r_lca;
    }
};