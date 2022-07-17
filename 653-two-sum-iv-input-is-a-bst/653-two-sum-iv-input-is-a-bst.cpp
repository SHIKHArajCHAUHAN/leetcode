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
    void pre(TreeNode*root,vector<int>&v)
    {
        if(root==NULL) return ;
        v.push_back(root->val);
        pre(root->left,v);
        pre(root->right,v);
    }
    
    bool findTarget(TreeNode* root, int k) {
      /* if(root==NULL) return false;
        if(root->left!=NULL && root->val+root->left->val==k) return true;
        if(root->right!=NULL&&root->val+root->right->val==k) return true;
       bool l= findTarget(root->left,k);
       bool r= findTarget(root->right,k);
        return (l||r);*/
       vector<int>v;
        pre(root,v);
        int n=v.size();
        bool ans=false;
       for(int i=0;i<n;i++)
       {
           for(int j=i+1;j<n;j++)
           {
               if(v[i]+v[j]==k)
                   ans=true;
           }
       }
        return ans;
    }
};