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
public://vector<int>v;
    int now=0;
    void inorder(TreeNode*root,int &k)
    {if(root==NULL) return;
        inorder(root->left,k);
   //  v.push_back(root->val);
     k--;if(k==0) now=root->val;
     inorder(root->right,k);
   }
    int kthSmallest(TreeNode* root, int k) {
        inorder(root,k);
        return now;
    }
};