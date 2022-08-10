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
public: int fn(TreeNode *root,int &diff)
{
    if(root==NULL) return 0;
    int sumleft=fn(root->left,diff);
    int sumright=fn(root->right,diff);
    diff+=abs(sumleft-sumright);
    root->val=root->val+ sumleft+sumright;
    return root->val;
}
    int findTilt(TreeNode* root) {
        int diff=0;
       fn(root,diff); 
        return diff;
    }
};