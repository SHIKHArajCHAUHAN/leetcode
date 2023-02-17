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
    void solve(TreeNode*root, vector<int>&v)
    {
        if(root==NULL) return ;
        
        solve(root->left,v);
        v.push_back(root->val);
        solve(root->right,v);
        return;
    }
    int minDiffInBST(TreeNode* root) {
        vector<int>v;
        solve(root,v);
        int minn=INT_MAX;
      int n=v.size();
        for(int i=1;i<n;i++)
        
        {if(minn>v[i]-v[i-1])
                minn=v[i]-v[i-1];}
        return minn;
        
    }
};