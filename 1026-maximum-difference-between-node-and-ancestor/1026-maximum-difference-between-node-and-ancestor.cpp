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
class Solution {int maxx=INT_MIN;
                
public:
    void inorder(TreeNode*root ,vector<int>v)
{
    if(root==NULL) return;
    for(auto i:v)
        maxx=max(maxx, abs(i-root->val));
    v.push_back(root->val);
    inorder(root->left,v);
    inorder(root->right,v);
}
    int maxAncestorDiff(TreeNode* root) {
       inorder(root,{});
        return maxx;
    
    }
};