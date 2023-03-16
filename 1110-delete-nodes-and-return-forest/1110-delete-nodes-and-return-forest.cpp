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
    TreeNode*fn(TreeNode*root,vector<TreeNode*>&ans,set<int>s)
    {
        if(root ==NULL) return NULL;
       root->left= fn(root->left,ans,s);
       root->right= fn(root->right,ans,s);
        if(s.find(root->val)!=s.end())
        {
            if(root->left)
            {
                ans.push_back(root->left);
            }
            if(root->right)
            {
                ans.push_back(root->right);
            }
            return nullptr;
        }
        return root;
    }
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        vector<TreeNode*>ans;
        if(root==nullptr) return { nullptr};
        set<int>s;
        for(auto i:to_delete)
        {
            s.insert(i);
        }
        fn(root,ans,s);
        if(s.find(root->val)==s.end())
        {
            ans.push_back(root);
        }
        return ans;
    }
};