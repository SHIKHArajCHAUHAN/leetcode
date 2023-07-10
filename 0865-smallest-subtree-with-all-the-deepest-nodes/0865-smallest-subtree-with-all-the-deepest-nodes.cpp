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
    int dept(TreeNode *root){
        if(root){
            return max(dept(root->left),dept(root->right))+1;
        }
        return 0;
    }
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        if(root){
            int ldept=dept(root->left);
            int rdept=dept(root->right);
            if(ldept==rdept)return root;
            if(ldept>rdept)
            return subtreeWithAllDeepest(root->left);
            else
            return subtreeWithAllDeepest(root->right);
        }
        return NULL;
    }
};