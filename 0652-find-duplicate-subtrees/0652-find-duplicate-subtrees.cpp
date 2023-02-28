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
    map<string,int>mp;
    string fn(TreeNode *root,vector<TreeNode*>&v)
    {
        if(root==NULL)return "#";
        string s=fn(root->left,v)+","+fn(root->right,v)+","+to_string(root->val);
        mp[s]++;
        if(mp[s]==2) v.push_back(root);
        return s;
    }
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        vector<TreeNode*>ans;
        fn(root,ans);
        return ans;
    }
};