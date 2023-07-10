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
     TreeNode* dfs(TreeNode* root,int low,int right){
        if(!root){return NULL;}
        //if the node lies between the low and right
        if(root->val>=low&&root->val<=right){
            root->left=dfs(root->left,low,right);
            root->right=dfs(root->right,low,right);
            return root;
        }

        else{
            root->left=dfs(root->left,low,right);
            if(root->left){
                return root->left;
            }
            root->right=dfs(root->right,low,right);
            if(root->right){
                return root->right;
            }
        }
        return NULL;
    }
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        return dfs(root,low,high);
    }
};