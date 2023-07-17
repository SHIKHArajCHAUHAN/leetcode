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
 long long total=0,maxi=INT_MIN;
    int maxProduct(TreeNode* root) {
        total=helpMaxProduct(root);
        helpMaxProduct(root);
        root->left=root->right=NULL;
        return maxi%((long long)(1e+9)+7);
    }

    long long helpMaxProduct(TreeNode*root)
    {
        if(!root)return 0;
        long long sub = root->val + helpMaxProduct(root->left)+ helpMaxProduct(root->right);
        if(maxi<sub*(total-sub))maxi=sub*(total-sub);
        return sub;
    }
};