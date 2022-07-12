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
    void solve(TreeNode *root,vector<int>&ans)
    {
        if(root==NULL) return ;
        if(!root->left&&!root->right)
            ans.push_back(root->val);
         solve(root->left,ans);
        solve(root->right,ans);
    }
   
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
       vector<int>a1;
        solve(root1,a1);
        vector<int>a2;
        solve(root2,a2);
        if(a1.size()!=a2.size()) return false;
        
        
            for(int i=0;i<a1.size();i++)
            {
                if(a1[i]!=a2[i])
                    return false;
            }
        
         return true;
        
    }
};