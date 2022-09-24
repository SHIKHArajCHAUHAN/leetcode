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
// vector<int>v;
class Solution {
   vector<vector<int>>ans;
public:
    void fn(TreeNode*root,int sum, vector<int>v, int tarsum)
    {
       if(root==NULL) return;
        sum+=root->val;
        v.push_back(root->val);
        if(root->left==NULL&&root->right==NULL&&sum==tarsum)
        {
         ans.push_back(v);}
        fn(root->left,sum,v,tarsum);
            fn(root->right,sum,v,tarsum);
        return;
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
      vector<int>v;
        int summ=0;
        fn(root,0,v,targetSum);
        
        return ans;
    }
};